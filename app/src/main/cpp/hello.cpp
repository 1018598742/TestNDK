//
// Created by Admin on 2018/8/15.
//

#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_fta_testndk_Hello_sayHello(JNIEnv *env,
                                    jobject) {
    std::string hello = "hello from my c++";
    return env->NewStringUTF(hello.c_str());
}