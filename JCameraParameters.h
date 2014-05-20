/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class wrapper_CameraParameters */

#ifndef _Included_wrapper_CameraParameters
#define _Included_wrapper_CameraParameters
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     wrapper_CameraParameters
 * Method:    JCameraParameters
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JCameraParameters
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_CameraParameters
 * Method:    JreadFromFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JreadFromFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     wrapper_CameraParameters
 * Method:    JisValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_wrapper_CameraParameters_JisValid
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_CameraParameters
 * Method:    JsetParams
 * Signature: (JJDD)V
 */
JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JsetParams
  (JNIEnv *, jobject, jlong, jlong, jdouble, jdouble);

/*
 * Class:     wrapper_CameraParameters
 * Method:    JsaveToFile
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JsaveToFile
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     wrapper_CameraParameters
 * Method:    JreadFromXMLFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JreadFromXMLFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     wrapper_CameraParameters
 * Method:    Jresize
 * Signature: (DD)V
 */
JNIEXPORT void JNICALL Java_wrapper_CameraParameters_Jresize
  (JNIEnv *, jobject, jdouble, jdouble);

/*
 * Class:     wrapper_CameraParameters
 * Method:    JglGetProjectionMatrix
 * Signature: (DDDD[DDDZ)V
 */
JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JglGetProjectionMatrix
  (JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdoubleArray, jdouble, jdouble, jboolean);

/*
 * Class:     wrapper_CameraParameters
 * Method:    JOgreGetProjectionMatrix
 * Signature: (DDDD[DDDZ)V
 */
JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JOgreGetProjectionMatrix
  (JNIEnv *, jobject, jdouble, jdouble, jdouble, jdouble, jdoubleArray, jdouble, jdouble, jboolean);

/*
 * Class:     wrapper_CameraParameters
 * Method:    JgetCameraLocation
 * Signature: (JJ)Lorg/opencv/core/Point;
 */
JNIEXPORT jobject JNICALL Java_wrapper_CameraParameters_JgetCameraLocation
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
