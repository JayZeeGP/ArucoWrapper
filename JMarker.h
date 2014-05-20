/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class wrapper_Marker */

#ifndef _Included_wrapper_Marker
#define _Included_wrapper_Marker
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     wrapper_Marker
 * Method:    JMarker
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_wrapper_Marker_JMarker__
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_Marker
 * Method:    JMarker
 * Signature: (Lwrapper/Marker;)V
 */
JNIEXPORT void JNICALL Java_wrapper_Marker_JMarker__Lwrapper_Marker_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     wrapper_Marker
 * Method:    JMarker
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_wrapper_Marker_JMarker__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     wrapper_Marker
 * Method:    JisValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_wrapper_Marker_JisValid
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_Marker
 * Method:    Jdraw
 * Signature: (J[DIZ)V
 */
JNIEXPORT void JNICALL Java_wrapper_Marker_Jdraw
  (JNIEnv *, jobject, jlong, jdoubleArray, jint, jboolean);

/*
 * Class:     wrapper_Marker
 * Method:    JglGetModelViewMatrix
 * Signature: ([D)V
 */
JNIEXPORT void JNICALL Java_wrapper_Marker_JglGetModelViewMatrix
  (JNIEnv *, jobject, jdoubleArray);

/*
 * Class:     wrapper_Marker
 * Method:    JgetArea
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_wrapper_Marker_JgetArea
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_Marker
 * Method:    JgetPerimeter
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_wrapper_Marker_JgetPerimeter
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_Marker
 * Method:    JgetCenter
 * Signature: ()Lorg/opencv/core/Point;
 */
JNIEXPORT jobject JNICALL Java_wrapper_Marker_JgetCenter
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_Marker
 * Method:    JcalculateExtrinsics
 * Signature: (FLwrapper/CameraParameters;Z)V
 */
JNIEXPORT void JNICALL Java_wrapper_Marker_JcalculateExtrinsics__FLwrapper_CameraParameters_2Z
  (JNIEnv *, jobject, jfloat, jobject, jboolean);

/*
 * Class:     wrapper_Marker
 * Method:    JcalculateExtrinsics
 * Signature: (FJJZ)V
 */
JNIEXPORT void JNICALL Java_wrapper_Marker_JcalculateExtrinsics__FJJZ
  (JNIEnv *, jobject, jfloat, jlong, jlong, jboolean);

/*
 * Class:     wrapper_Marker
 * Method:    JOgreGetPoseParameters
 * Signature: ([D[D)V
 */
JNIEXPORT void JNICALL Java_wrapper_Marker_JOgreGetPoseParameters
  (JNIEnv *, jobject, jdoubleArray, jdoubleArray);

#ifdef __cplusplus
}
#endif
#endif