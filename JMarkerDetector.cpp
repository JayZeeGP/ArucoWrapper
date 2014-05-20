#include "JMarkerDetector.h"
#include "Handle.h"
#include <cstdlib>
#include <aruco.h>
#include <cv.h>  //Es posible que no vaya a utilizar cv.h
#include <highgui.h>

using namespace std;

/*
 * 
 */
using namespace cv;
using namespace aruco;

JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JMarkerDetector(JNIEnv * env, jobject obj){
    MarkerDetector *inst = new MarkerDetector();
    setHandle(env, obj, inst);
}

JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_Jdetect(JNIEnv * env, jobject obj, jlong img, jobject markers, jobject camParams, jfloat markerSizeMeters){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
        
    // use the Array list
    jclass ArrayList_class = env->FindClass( "java/util/ArrayList" );
    
    jclass Marker_class = env->FindClass("wrapper/Marker");
    
    jmethodID Add_method = env->GetMethodID(ArrayList_class,"add", "(Ljava/lang/Object;)Z");
    jmethodID Get_method = env->GetMethodID(ArrayList_class,"get", "(I)Ljava/lang/Object;");
    
    jmethodID Marker_Constructor_method = env->GetMethodID(Marker_class,"<init>","(J)V");
    jmethodID Marker_CopyConstructor_method = env->GetMethodID(Marker_class,"<init>","(Lwrapper/Marker;)V");
    jmethodID Marker_EmptyConstructor_method = env->GetMethodID(Marker_class,"<init>","()V");
    
    jmethodID Marker_SetNativeHandle_method = env->GetMethodID(Marker_class,"setNativeHandle","(J)V");

    cv::Mat* inMat = (cv::Mat*)img;
    aruco::CameraParameters *camParam = getHandle<CameraParameters>(env, camParams);
    
    std::vector <Marker> vMarkers;

    inst->detect(*inMat, vMarkers, *camParam, markerSizeMeters);
    
    jobject newMarkers[vMarkers.size()];
    
    for (int i=0; i< vMarkers.size(); i++) {   
        Marker * markPtr = &vMarkers[i];
        newMarkers[i] = env->NewObject(Marker_class,Marker_Constructor_method,(long) markPtr);
        env->CallBooleanMethod(markers,Add_method,newMarkers[i]);
        env->DeleteLocalRef(newMarkers[i]);
        }
    
    env->DeleteLocalRef(ArrayList_class);
    env->DeleteLocalRef(Marker_class);
}

JNIEXPORT jint JNICALL Java_wrapper_MarkerDetector_JgetDesiredSpeed(JNIEnv *env, jobject obj){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    return (jint) inst->getDesiredSpeed();
}

JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JsetDesiredSpeed(JNIEnv * env, jobject obj, jint val){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    inst->setDesiredSpeed((int)val);
}

JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JsetThresholdMethod(JNIEnv * env, jobject obj, jobject method){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    //inst->

  }


JNIEXPORT jobject JNICALL Java_wrapper_MarkerDetector_JgetThresholdMethod(JNIEnv * env, jobject obj){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    //inst->

  }


JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JsetThresholdParams(JNIEnv * env, jobject obj, jdouble param1, jdouble param2){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    inst->setThresholdParams((double) param1, (double) param2);
  }


JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JgetThresholdedImage(JNIEnv * env, jobject obj, jlong imAddr){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    cv::Mat* img = (cv::Mat*)imAddr;
    inst->getThresholdedImage(*img);
  }


JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JsetCornerRefinementMethod(JNIEnv * env, jobject obj, jobject method){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    //inst->
  }


JNIEXPORT jobject JNICALL Java_wrapper_MarkerDetector_JgetCornerRefinementMethod(JNIEnv * env, jobject obj){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    //inst->
  }


JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JsetMinMaxSize(JNIEnv * env, jobject obj, jfloat min, jfloat max){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    inst->setMinMaxSize((float)min,(float)max);
  }


JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JenableErosion(JNIEnv * env, jobject obj, jboolean enable){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    inst->enableErosion((bool)enable);
  }


JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_JpyrDown(JNIEnv * env, jobject obj, jint level){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    inst->pyrDown((int)level);
  }


JNIEXPORT void JNICALL Java_wrapper_MarkerDetector_Jthreshold(JNIEnv * env, jobject obj, jint method, jlong greyAddr, jlong thresImgAddr, jdouble param1, jdouble param2){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    cv::Mat* grey = (cv::Mat*)greyAddr;
    cv::Mat* thresImg = (cv::Mat*)thresImgAddr;
    inst->thresHold(method, *grey, *thresImg, param1, param2);   
  }


JNIEXPORT jboolean JNICALL Java_wrapper_MarkerDetector_Jwarp(JNIEnv * env, jobject obj, jobject inAddr, jobject outAddr, jdouble width, jdouble height, jobject points){
    MarkerDetector *inst = getHandle<MarkerDetector>(env, obj);
    cv::Mat* in = (cv::Mat*)inAddr;
    cv::Mat* out = (cv::Mat*)outAddr;
    Size size = Size((double)width,  (double)height);
    return inst->warp(in, out, size, points);
}
