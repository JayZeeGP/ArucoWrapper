#include "JBoardConfiguration.h"
#include "Handle.h"
#include <cstdlib>
#include <aruco.h>
#include <highgui.h>
#include <cv.h> 

using namespace std;

/*
 * 
 */
using namespace cv;
using namespace aruco;


JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JBoardConfiguration__(JNIEnv * env, jobject obj){
    BoardConfiguration *inst = new BoardConfiguration();
    setHandle(env, obj, inst);    
}

JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JBoardConfiguration__J(JNIEnv * env, jobject obj, jlong addr){
    BoardConfiguration *inst = new BoardConfiguration(*(BoardConfiguration*)addr);
    setHandle(env,obj,inst);
}

JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JBoardConfiguration__Lwrapper_BoardConfiguration_2(JNIEnv * env, jobject obj, jobject conf){
	//USAR JOBJECT
	//BoardConfiguration *inst = new BoardConfiguration();
	//setHandle(env, obj, inst);
}

JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JsaveToFile(JNIEnv * env, jobject obj, jstring sfile){
	BoardConfiguration *inst = getHandle<BoardConfiguration>(env,obj);
        const char* str;
        str = env->GetStringUTFChars(sfile, NULL);
        try{
            inst->saveToFile(str);
        }catch(cv::Exception e){
            newJavaException(env, "java/lang/Exception", e.what());
        }
	
        env->ReleaseStringUTFChars(sfile, str);
}

JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JreadFromFile(JNIEnv * env, jobject obj, jstring sfile){
	BoardConfiguration *inst = getHandle<BoardConfiguration>(env,obj);
        const char* str;
        str = env->GetStringUTFChars(sfile, NULL);
        
	inst->readFromFile(str);
        env->ReleaseStringUTFChars(sfile, str);
}

JNIEXPORT jboolean JNICALL Java_wrapper_BoardConfiguration_JisExpressedInMeters(JNIEnv * env, jobject obj){
	BoardConfiguration *inst = getHandle<BoardConfiguration>(env,obj);

	return inst->isExpressedInMeters();
}

JNIEXPORT jboolean JNICALL Java_wrapper_BoardConfiguration_JisExpressedInPixels(JNIEnv * env, jobject obj){
	BoardConfiguration *inst = getHandle<BoardConfiguration>(env,obj);

	return inst->isExpressedInPixels();
}

JNIEXPORT jint JNICALL Java_wrapper_BoardConfiguration_JgetIndexOfMarkerId(JNIEnv * env, jobject obj, jint id){
	BoardConfiguration *inst = getHandle<BoardConfiguration>(env,obj);

	return inst->getIndexOfMarkerId(id);
}

JNIEXPORT void JNICALL Java_wrapper_BoardConfiguration_JgetIdList(JNIEnv * env, jobject obj, jobject ids, jboolean append){
	BoardConfiguration *inst = getHandle<BoardConfiguration>(env,obj);
	vector <int> idVectors;

	inst->getIdList(idVectors, append);
}

