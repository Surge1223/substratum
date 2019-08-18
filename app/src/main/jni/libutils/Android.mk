LOCAL_PATH := $(call my-dir)

libutils_SRC_FILES := \
        CallStack.cpp \
        FileMap.cpp \
        JenkinsHash.cpp \
        Log.cpp \
        NativeHandle.cpp \
        Printer.cpp \
        PropertyMap.cpp \
        RefBase.cpp \
        SharedBuffer.cpp \
        Static.cpp \
        StopWatch.cpp \
        String8.cpp \
        String16.cpp \
        StrongPointer.cpp \
        SystemClock.cpp \
        Threads.cpp \
        Timers.cpp \
        Tokenizer.cpp \
        Unicode.cpp \
        VectorImpl.cpp \
        misc.cpp

libutils_CFLAGS += -DHAVE_ENDIAN_H -DHAVE_ANDROID_OS -DHAVE_PTHREADS -DHAVE_SYS_UIO_H -DHAVE_POSIX_FILEMAP -fvisibility=protected -D__ANDROID_API__=21
libutils_CFLAGS += -fvisibility=protected -D__ANDROID_API__=21

include $(CLEAR_VARS)
LOCAL_SRC_FILES:= $(libutils_SRC_FILES)
ifeq ($(HOST_OS), linux)
LOCAL_SRC_FILES += Looper.cpp
endif
ifeq ($(HOST_OS),darwin)
LOCAL_CFLAGS += -Wno-unused-parameter
LOCAL_CPPFLAGS += \
    -std=c++1z \
    -D__STDC_FORMAT_MACROS \

endif
LOCAL_C_INCLUDES := \
         include \
	../../libcutils/jni/include \
	/opt/sdk/ndk-bundle/sources/cxx-stl/llvm-libc++/include
LOCAL_MODULE:= libutils
LOCAL_LDLIBS := -llog
LOCAL_CFLAGS += $(libutils_CFLAGS)
LOCAL_MULTILIB := both
LOCAL_C_INCLUDES += include/external/safe-iop/include
include $(BUILD_STATIC_LIBRARY)
