/*
 * Copyright (c) 2016-2019 Projekt Substratum
 * This file is part of Substratum.
 *
 * SPDX-License-Identifier: GPL-3.0-Or-Later
 */
import DependencyStore as deps

import java.io.FileInputStream
import java.io.IOException
import java.util.Properties


repositories {
    google()
    jcenter()
    mavenCentral()
    maven("https://dl.bintray.com/kotlin/kotlin-dev")
    maven("https://dl.bintray.com/kotlin/kotlin-eap")
}

plugins {
    id("com.android.application")
}

val keystorePropertiesFile = rootProject.file("keystore.properties")

fun gitHash(): String {
    return try {
        return Runtime.getRuntime().exec("git describe --tags").inputStream.reader().use { it.readText() }.trim()
    } catch (ignored: IOException) {
        ""
    }
}

val appDir = rootDir.resolve("src/main/")
val libsDir = appDir.resolve("libs")

val androidPresets = mapOf(
        "arm32" to ("androidNativeArm32" to "$libsDir/armeabi-v7a"),
        "arm64" to ("androidNativeArm64" to "$libsDir/arm64-v8a")
)

android {
    compileSdkVersion(28)
    dataBinding.isEnabled = true
    defaultConfig {
        applicationId = "projekt.substratum"
        minSdkVersion(26)
        targetSdkVersion(28)
        versionCode = 1021
        versionName = "one thousand twenty one"
        buildConfigField("java.util.Date", "buildTime", "new java.util.Date(${System.currentTimeMillis()}L)")
        buildConfigField("String", "GIT_HASH", "\"${gitHash()}\"")
        setProperty("archivesBaseName", "substratum_${gitHash()}")
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }

    sourceSets {
        val main by getting {
            jni.srcDirs("src/main/jni")
            jniLibs.srcDirs("libs")
            jniLibs.srcDir("src/main/libs")
        }
    }

    if (keystorePropertiesFile.exists()) {
        val keystoreProperties = Properties()
        keystoreProperties.load(FileInputStream(keystorePropertiesFile))

        signingConfigs {
            create("release") {
                keyAlias = keystoreProperties["keyAlias"].toString()
                keyPassword = keystoreProperties["keyPassword"].toString()
                storeFile = file(keystoreProperties["storeFile"].toString())
                storePassword = keystoreProperties["storePassword"].toString()
            }
        }
        buildTypes.getByName("release").signingConfig = signingConfigs.getByName("release")
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
            // proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
        }
    }
    lintOptions {
        isAbortOnError = true
        disable("MissingTranslation")
    }
    packagingOptions {
        exclude("META-INF/*.kotlin_module")
    }
}

dependencies {
    implementation(fileTree(mapOf("dir" to "libs", "include" to listOf("*.jar"))))
    annotationProcessor(deps.ThirdParty.glideCompiler)
    implementation(deps.AndroidX.appcompat)
    implementation(deps.AndroidX.cardview)
    implementation(deps.AndroidX.databindingRuntime)
    implementation(deps.AndroidX.palette)
    implementation(deps.ThirdParty.coac)
    implementation(deps.ThirdParty.commonsio)
    implementation(deps.AndroidX.apksig)
    implementation(deps.ThirdParty.glide)
    implementation(deps.ThirdParty.floatingview)
    implementation(deps.Material.material)
    implementation(deps.ThirdParty.sheetfab)
    implementation(deps.ThirdParty.svgview)
    implementation(deps.ThirdParty.aboutlibraries) {
        isTransitive = true
    }
    implementation(deps.ThirdParty.welcome)
    implementation(deps.ThirdParty.imagecropper)
    implementation(deps.ThirdParty.gesturerecycler)
    implementation(deps.ThirdParty.expandablelayout)
    implementation(deps.ThirdParty.ztzip)
}
