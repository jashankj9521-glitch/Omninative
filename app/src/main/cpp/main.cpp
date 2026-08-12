#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_omninative_app_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */) {
    std::string hello = "Hello from OmniNative native code";
    return env->NewStringUTF(hello.c_str());
}
