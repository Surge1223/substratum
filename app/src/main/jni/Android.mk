#
# Copyright (C) 2019 Projekt Substratum
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

androidfw_SRC_FILES := \
        androidfw/ApkAssets.cpp \
        androidfw/Asset.cpp \
        androidfw/AssetDir.cpp \
        androidfw/AssetManager.cpp \
        androidfw/AssetManager2.cpp \
        androidfw/AttributeResolution.cpp \
        androidfw/ChunkIterator.cpp \
        androidfw/LoadedArsc.cpp \
        androidfw/LocaleData.cpp \
        androidfw/misc.cpp \
        androidfw/ObbFile.cpp \
        androidfw/ResourceTypes.cpp \
        androidfw/ResourceUtils.cpp \
        androidfw/StreamingZipInflater.cpp \
        androidfw/TypeWrappers.cpp \
        androidfw/Util.cpp \
        androidfw/ZipFileRO.cpp \
        androidfw/ZipUtils.cpp

androidfw_CFLAGS := -Wall -Wunreachable-code
androidfw_CFLAGS += -DSTATIC_ANDROIDFW_FOR_TOOLS
androidfw_C_INCLUDES := $(LOCAL_PATH)/androidfw/include
androidfw_C_INCLUDES += $(LOCAL_PATH)/androidfw/include/androidfw
androidfw_C_INCLUDES += $(LOCAL_PATH)/libutils/include/safe-iop/include
androidfw_C_INCLUDES += $(LOCAL_PATH)/include
androidfw_C_INCLUDES += $(LOCAL_PATH)/libutils/include
androidfw_C_INCLUDES += $(LOCAL_PATH)/libutils/include/c++/4.9.x
androidfw_C_INCLUDES += $(LOCAL_PATH)/libutils/include/c++/4.9.x/aarch64-linux-android

LOCAL_MODULE:= libandroidfw
LOCAL_MODULE_TAGS := optional
LOCAL_CFLAGS += $(androidfw_CFLAGS)
LOCAL_C_INCLUDES := $(androidfw_C_INCLUDES)
LOCAL_CPPFLAGS += \
	-std=c++1z \
	-D__STDC_FORMAT_MACROS \
	-Wno-macro-redefined
LOCAL_SRC_FILES := $(androidfw_SRC_FILES)
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)

libutils_SRC_FILES := \
        libutils/CallStack.cpp \
        libutils/FileMap.cpp \
        libutils/JenkinsHash.cpp \
        libutils/Log.cpp \
        libutils/NativeHandle.cpp \
        libutils/Printer.cpp \
        libutils/PropertyMap.cpp \
        libutils/RefBase.cpp \
        libutils/SharedBuffer.cpp \
        libutils/Static.cpp \
        libutils/StopWatch.cpp \
        libutils/String8.cpp \
        libutils/String16.cpp \
        libutils/StrongPointer.cpp \
        libutils/SystemClock.cpp \
        libutils/Threads.cpp \
        libutils/Timers.cpp \
        libutils/Tokenizer.cpp \
        libutils/Unicode.cpp \
        libutils/VectorImpl.cpp \
        libutils/misc.cpp

libutils_CFLAGS += \
        -DHAVE_ENDIAN_H \
        -DHAVE_ANDROID_OS \
        -DHAVE_PTHREADS \
        -DHAVE_SYS_UIO_H \
        -DHAVE_POSIX_FILEMAP \
        -fvisibility=protected

LOCAL_SRC_FILES:= $(libutils_SRC_FILES)
ifeq ($(HOST_OS), linux)
LOCAL_SRC_FILES += Looper.cpp
endif
ifeq ($(HOST_OS),darwin)
LOCAL_CFLAGS += -Wno-unused-parameter
LOCAL_CPPFLAGS += \
    -std=c++1z \
    -D__STDC_FORMAT_MACROS \
    -Wno-macro-redefined
endif
LOCAL_C_INCLUDES := \
	$(LOCAL_PATH)/libutils/include \
	$(LOCAL_PATH)/expat \
	$(LOCAL_PATH)/include \
	$(LOCAL_PATH)/libutils/include/c++/4.9.x \
	$(LOCAL_PATH)/libutils/include/c++/4.9.x/aarch64-linux-android

LOCAL_MODULE:= libutils
LOCAL_CFLAGS += $(libutils_CFLAGS)
LOCAL_MULTILIB := both
LOCAL_C_INCLUDES += include/external/safe-iop/include
include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE := subscompile
LOCAL_C_INCLUDES := \
	$(LOCAL_PATH)/include \
	$(LOCAL_PATH)/libutils/include \
	$(LOCAL_PATH)/expat \
	$(LOCAL_PATH)/libutils/include/c++/4.9.x \
	$(LOCAL_PATH)/libutils/include/c++/4.9.x/aarch64-linux-android

LOCAL_SRC_FILES := \
	Main.cpp \
	aapt_jni.cpp
LOCAL_LDLIBS := -llog -lc  -landroid -lz
LOCAL_STATIC_LIBRARIES := libutils libandroidfw
LOCAL_LDFLAGS := -shared
LOCAL_CFLAGS += -Wno-unused-parameter
LOCAL_CPPFLAGS += \
    -std=c++1z \
    -D__STDC_FORMAT_MACROS \
    -Wno-format \
    -Wno-macro-redefined

NDK_LIBS_OUT := $(LOCAL_PATH)/../libs

include $(BUILD_SHARED_LIBRARY)
