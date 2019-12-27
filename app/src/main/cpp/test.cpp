//
// Created by felcks on 20/12/19.
//

#include <jni.h>
#include "test.h"

extern "C" JNIEXPORT jint JNICALL
Java_com_example_c_1teste_MainActivity_getIntFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    int test = 100;
    return test;
}
