LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_SRC_FILES := fib.c
LOCAL_MODULE := libfib
include $(BUILD_SHARED_LIBRARY)
