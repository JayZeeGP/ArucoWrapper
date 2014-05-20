#include "JBoard.h"
#include "Handle.h"
#include <cstdlib>
#include <aruco.h>
#include <highgui.h>
#include <cv.h> 

using namespace aruco;

JNIEXPORT void JNICALL Java_wrapper_Board_JBoard(JNIEnv * env, jobject obj){
	Board *inst = new Board();
	setHandle(env, obj, inst);
}

JNIEXPORT void JNICALL Java_wrapper_Board_JsaveToFile(JNIEnv * env, jobject obj, jstring){
	Board *inst = getHandle<Board>(env, obj);
}


JNIEXPORT void JNICALL Java_wrapper_Board_JreadFromFile(JNIEnv * env, jobject obj, jstring){
	Board *inst = getHandle<Board>(env, obj);
}


JNIEXPORT void JNICALL Java_wrapper_Board_JglGetModelViewMatrix(JNIEnv * env, jobject obj, jdoubleArray){
	Board *inst = getHandle<Board>(env, obj);
}


JNIEXPORT void JNICALL Java_wrapper_Board_JOgreGetPoseParameters(JNIEnv * env, jobject obj, jdoubleArray, jdoubleArray){
	Board *inst = getHandle<Board>(env, obj);
}
