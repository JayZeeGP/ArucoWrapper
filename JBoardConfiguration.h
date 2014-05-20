/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class wrapper_BoardConfiguration */

#ifndef _Included_wrapper_BoardConfiguration
#define _Included_wrapper_BoardConfiguration
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JBoardConfiguration
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JBoardConfiguration__
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JBoardConfiguration
 * Signature: (Lwrapper/BoardConfiguration;)V
 */
JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JBoardConfiguration__Lwrapper_BoardConfiguration_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JBoardConfiguration
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JBoardConfiguration__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JsaveToFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JsaveToFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JreadFromFile
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JreadFromFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JisExpressedInMeters
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_wrapper_BoardConfiguration_JisExpressedInMeters
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JisExpressedInPixels
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_wrapper_BoardConfiguration_JisExpressedInPixels
  (JNIEnv *, jobject);

/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JgetIndexOfMarkerId
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_wrapper_BoardConfiguration_JgetIndexOfMarkerId
  (JNIEnv *, jobject, jint);

/*
 * Class:     wrapper_BoardConfiguration
 * Method:    JgetIdList
 * Signature: (Ljava/util/ArrayList;Z)V
 */
JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JgetIdList
  (JNIEnv *, jobject, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif