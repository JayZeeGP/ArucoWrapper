#include "JBoardDetector.h"
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

JNIEXPORT void JNICALL Java_wrapper_BoardDetector_JBoardDetector(JNIEnv * env, jobject obj, jboolean setYPerpendicular){
    BoardDetector *inst = new BoardDetector((bool) setYPerpendicular);
    setHandle(env, obj, inst);
}

JNIEXPORT jfloat JNICALL Java_wrapper_BoardDetector_Jdetect__J(JNIEnv * env, jobject obj, jlong imAddr) {
    BoardDetector * bd = getHandle<BoardDetector>(env, obj);
    cv::Mat* img = (cv::Mat*)imAddr;
    try{
        bd->detect(*img);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}

JNIEXPORT jobject JNICALL Java_wrapper_BoardDetector_JgetDetectedBoard(JNIEnv * env, jobject obj){
    BoardDetector * bd = getHandle<BoardDetector>(env, obj);
    return NULL;
}

JNIEXPORT jobject JNICALL Java_wrapper_BoardDetector_JgetMarkerDetector(JNIEnv * env, jobject obj){
    BoardDetector * bd = getHandle<BoardDetector>(env, obj);
    bd->getMarkerDetector();   
    return NULL;
}

JNIEXPORT jobject JNICALL Java_wrapper_BoardDetector_JgetDetectedMarkers(JNIEnv * env, jobject obj){
    BoardDetector * bd = getHandle<BoardDetector>(env, obj);
    bd->getDetectedMarkers();
    return NULL;
}

JNIEXPORT void JNICALL Java_wrapper_BoardDetector_JsetYPerpendicular(JNIEnv * env, jobject obj, jboolean enable){
    BoardDetector * bd = getHandle<BoardDetector>(env, obj);
    bd->setYPerperdicular((bool)enable);
}

JNIEXPORT jfloat JNICALL Java_wrapper_BoardDetector_Jdetect__Ljava_util_ArrayList_2Lwrapper_BoardConfiguration_2Lwrapper_Board_2Lwrapper_CameraParameters_2F(JNIEnv * env, jobject obj, jobject detectedMarkers, jobject BConf, jobject BDetected, jobject CP, jfloat markerSizeMeters){
    BoardDetector * bd = getHandle<BoardDetector>(env, obj); 
    float returnedValue;
    // use the Array list
    jclass ArrayList_class = env->FindClass( "java/util/ArrayList" );
    
    jclass Marker_class = env->FindClass("wrapper/Marker");
    
    jmethodID Add_method = env->GetMethodID(ArrayList_class,"add", "(Ljava/lang/Object;)Z");
    
    jmethodID Marker_Constructor_method = env->GetMethodID(Marker_class,"<init>","(J)V");

    aruco::CameraParameters *camParam = getHandle<CameraParameters>(env, CP);
    aruco::BoardConfiguration *boardConf = getHandle<BoardConfiguration>(env, BConf);
    aruco::Board *boardDete = getHandle<Board>(env, BDetected);
    
    std::vector <Marker> vMarkers;
    
    try{
        returnedValue = bd->detect(vMarkers, *boardConf, *boardDete, *camParam, (float)markerSizeMeters);    
    }catch(cv::Exception e){
        returnedValue = -1;
        newJavaException(env, "java/lang/Exception", e.what());
    }
    
    jobject newMarkers[vMarkers.size()];
    
    for (int i=0; i< vMarkers.size(); i++) {   
        Marker * markPtr = &vMarkers[i];
        newMarkers[i] = env->NewObject(Marker_class,Marker_Constructor_method,(long) markPtr);
        env->CallBooleanMethod(detectedMarkers,Add_method,newMarkers[i]);
        env->DeleteLocalRef(newMarkers[i]);
        }
    
    env->DeleteLocalRef(ArrayList_class);
    env->DeleteLocalRef(Marker_class);

    return returnedValue;
}

JNIEXPORT jfloat JNICALL Java_wrapper_BoardDetector_Jdetect__Ljava_util_ArrayList_2Lwrapper_BoardConfiguration_2Lwrapper_Board_2JJF(JNIEnv * env, jobject obj, jobject, jobject, jobject, jlong, jlong, jfloat){
    BoardDetector * bd = getHandle<BoardDetector>(env, obj); 
}
