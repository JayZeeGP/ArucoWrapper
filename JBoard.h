/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class wrapper_Board */

#ifndef _Included_wrapper_Board
#define _Included_wrapper_Board
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     wrapper_Board
 * Method:    JBoard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_wrapper_Board_JBoard
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_Board
 * Method:    JsaveToFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_wrapper_Board_JsaveToFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     wrapper_Board
 * Method:    JreadFromFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_wrapper_Board_JreadFromFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     wrapper_Board
 * Method:    JglGetModelViewMatrix
 * Signature: ([D)V
 */
JNIEXPORT void JNICALL Java_wrapper_Board_JglGetModelViewMatrix
  (JNIEnv *, jobject, jdoubleArray);

/*
 * Class:     wrapper_Board
 * Method:    JOgreGetPoseParameters
 * Signature: ([D[D)V
 */
JNIEXPORT void JNICALL Java_wrapper_Board_JOgreGetPoseParameters
  (JNIEnv *, jobject, jdoubleArray, jdoubleArray);

#ifdef __cplusplus
}
#endif
#endif