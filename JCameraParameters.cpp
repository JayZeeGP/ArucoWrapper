#include "JCameraParameters.h"
#include "Handle.h"
#include <cstdlib>
#include <aruco.h>
#include <cv.h>  //Es posible que no vaya a utilizar cv.h


using namespace std;

/*
 * 
 */
using namespace cv;
using namespace aruco;

JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JCameraParameters(JNIEnv * env, jobject obj){
    CameraParameters *inst = new CameraParameters();
    setHandle(env, obj, inst);
}

JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JreadFromFile(JNIEnv * env, jobject obj, jstring path){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    char buff[256]; //We assume he won't type more
    const char *str;
    str = env->GetStringUTFChars(path, NULL);
    try{
        c->readFromFile(str);    
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}

JNIEXPORT jboolean JNICALL Java_wrapper_CameraParameters_JisValid(JNIEnv * env, jobject obj){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    return (jboolean)(c->isValid());
}

JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JsetParams(JNIEnv * env, jobject obj, jlong camMatAddr, jlong distCoeffAddr, jdouble width, jdouble height){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    cv::Mat* camMat = (cv::Mat*)camMatAddr;
    cv::Mat* distCoeff = (cv::Mat*)distCoeffAddr;
    Size size = Size((double)width,(double)height);
    
    try{
        c->setParams(*camMat, *distCoeff, size);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    } 
}

JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JsaveToFile(JNIEnv * env, jobject obj, jstring path, jboolean isXML){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    char buff[256]; //We assume he won't type more
    const char *str;
    str = env->GetStringUTFChars(path, NULL);
    try{
        c->saveToFile(str,(bool)isXML);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}

JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JreadFromXMLFile(JNIEnv * env, jobject obj, jstring path){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    char buff[256]; //We assume he won't type more
    const char *str;
    str = env->GetStringUTFChars(path, NULL);
    try{
        c->readFromXMLFile(str);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}

JNIEXPORT void JNICALL Java_wrapper_CameraParameters_Jresize(JNIEnv * env, jobject obj, jdouble width, jdouble height){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    try{
        c->resize(Size(width,height));
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}

JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JglGetProjectionMatrix(JNIEnv * env, jobject obj, jdouble orgWidth, jdouble orgHeight, jdouble width, jdouble height, jdoubleArray proj_matrix, jdouble gnear, jdouble gfar, jboolean invert){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    double proj[16];
    env->GetDoubleArrayRegion(proj_matrix,0,16,proj);
    try{
        c->glGetProjectionMatrix(Size((double)orgWidth,(double)orgHeight),Size((double)width,(double)height), proj, (double) gnear, (double)gfar,(bool)invert);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}

JNIEXPORT void JNICALL Java_wrapper_CameraParameters_JOgreGetProjectionMatrix(JNIEnv * env, jobject obj, jdouble orgWidth, jdouble orgHeight, jdouble width, jdouble height, jdoubleArray proj_matrix, jdouble gnear, jdouble gfar, jboolean invert){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    double proj[16];
    env->GetDoubleArrayRegion(proj_matrix,0,16,proj);
    try{
        c->OgreGetProjectionMatrix(Size((double)orgWidth,(double)orgHeight),Size((double)width,(double)height), proj, (double) gnear, (double)gfar,(bool)invert);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}

JNIEXPORT jobject JNICALL Java_wrapper_CameraParameters_JgetCameraLocation(JNIEnv * env, jobject obj, jlong RvecAddr, jlong TvecAddr){
    CameraParameters *c = getHandle<CameraParameters>(env, obj);
    cv::Mat* Rvec = (cv::Mat*)RvecAddr;
    cv::Mat* Tvec = (cv::Mat*)TvecAddr;
    
    c->getCameraLocation(*Rvec, *Tvec);
}