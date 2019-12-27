#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_c_1teste_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello Danilo C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jint JNICALL
Java_com_example_c_1teste_MainActivity_intFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    int test = 1;
    return test;
}

