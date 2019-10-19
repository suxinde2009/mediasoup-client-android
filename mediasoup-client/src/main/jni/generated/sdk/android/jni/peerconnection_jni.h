#ifndef GEN_MEDIASOUP_CLIENT_ANDROID_PEERCONNECTION_JNI_H
#define GEN_MEDIASOUP_CLIENT_ANDROID_PEERCONNECTION_JNI_H

#include <jni.h>
#include "sdk/android/src/jni/jni_generator_helper.h"

const char kClassPath_org_mediasoup_droid_PeerConnection[] =
        "org/mediasoup/droid/PeerConnection";

JNI_REGISTRATION_EXPORT
std::atomic<jclass> g_org_mediasoup_droid_PeerConnection_clazz(nullptr);
// Leaking this jclass as we cannot use LazyInstance from some threads.
#ifndef org_mediasoup_droid_PeerConnection_clazz_defined
#define org_mediasoup_droid_PeerConnection_clazz_defined

inline jclass org_mediasoup_droid_PeerConnection_clazz(JNIEnv *env) {
    return base::android::LazyGetClass(env, kClassPath_org_mediasoup_droid_PeerConnection,
                                       &g_org_mediasoup_droid_PeerConnection_clazz);
}

#endif

static std::atomic<jmethodID> g_org_mediasoup_droid_PeerConnection_getNativeOwnedPeerConnection(
        nullptr);

static jlong Java_Mediasoup_PeerConnection_getNativeOwnedPeerConnection(
        JNIEnv *env,
        const base::android::JavaRef<jobject> &obj) {
    jclass clazz = org_mediasoup_droid_PeerConnection_clazz(env);
    CHECK_CLAZZ(env, obj.obj(),
                org_mediasoup_droid_PeerConnection_clazz(env), 0);

    jni_generator::JniJavaCallContextChecked call_context;
    call_context.Init<
            base::android::MethodID::TYPE_INSTANCE>(
            env,
            clazz,
            "getNativeOwnedPeerConnection",
            "()J",
            &g_org_mediasoup_droid_PeerConnection_getNativeOwnedPeerConnection);

    jlong ret = env->CallLongMethod(obj.obj(), call_context.base.method_id);
    return ret;
}

#endif //GEN_MEDIASOUP_CLIENT_ANDROID_PEERCONNECTION_JNI_H
