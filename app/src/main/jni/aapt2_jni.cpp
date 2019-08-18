#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>
#include <string.h>
#include <libgen.h>
#include <sys/system_properties.h>
#include <jni.h>
#include <android/asset_manager.h>
#include <android/asset_manager_jni.h>
#include <android/log.h>
#include "Main.h"
#define DEBUG_TAG "aapt2-subs"

extern int nativeCompile(const char *srcFile, const char *destDir);

jint Java_projekt_substratum_compiler_aapt2_Aapt2_compile(JNIEnv *env, jobject , jstring args) {
	jboolean isCopy;
	const char * szArgs = (*env).GetStringUTFChars(args, &isCopy);
	char *ptr1, *ptr2;
	int i, idx, argc = 1, len;
	jint rc = 99;

	__android_log_print(ANDROID_LOG_DEBUG, "JNImain",
			"Native method call: JNImain (%s)", szArgs);
	len = static_cast<int>(strlen(szArgs));
	for (i = 0; i < len; i++)
		if (szArgs[i] == '\t')
			argc++;
	char * argv[argc];
	ptr1 = ptr2 = (char*) szArgs;
	idx = 0;
	for (i = 0; i < len; i++) {
		if (*ptr2 == '\t') {
			*ptr2 = 0;
			argv[idx] = ptr1;
			idx++;
			ptr1 = ptr2 + 1;
		}
		ptr2++;
	} // for
	argv[idx] = ptr1;

	// redirect stderr and stdout
	freopen("/storage/emulated/0/.AaptJNI/native_stderr.txt", "w", stderr);
	freopen("/storage/emulated/0/.AaptJNI/native_stdout.txt", "w", stdout);

	fprintf(stdout, "Aapt arguments:\n");
	for (i = 1; i < argc; i++) {
		fprintf(stdout, "%s\n", argv[i]);
	}

	// call aapt
	rc = main(argc, argv);

	// stopping the redirection
	fclose(stderr);
	fclose(stdout);

	return rc;
}
