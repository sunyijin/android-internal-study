#include "com_intel_fibnative_FibLib.h"

jlong fib(jlong n) {
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fib(n-1)+fib(n-1);
}

JNIEXPORT jlong JNICALL Java_com_intel_fibnative_FibLib_fibN
  (JNIEnv * env, jobject object, jlong n) {
	return fib(n);
}