#include "JMarker.h"
#include "Handle.h"
#include <cstdlib>
#include <aruco.h>
#include <highgui.h>
#include <cv.h>  //Es posible que no vaya a utilizar cv.h


using namespace std;

/*
 * 
 */
using namespace cv;
using namespace aruco;

JNIEXPORT void JNICALL Java_wrapper_Marker_JMarker__(JNIEnv *env, jobject obj){
    Marker *inst = new Marker();
    setHandle(env, obj, inst);
}

JNIEXPORT void JNICALL Java_wrapper_Marker_JMarker__Lwrapper_Marker_2(JNIEnv * env, jobject obj, jobject marker){
    Marker *inst = new Marker();
    setHandle(env,obj,inst);
}

JNIEXPORT void JNICALL Java_wrapper_Marker_JMarker__J(JNIEnv *env, jobject obj, jlong addr){
    Marker *inst = new Marker(*(Marker*)addr);
    setHandle(env,obj,inst);
}

JNIEXPORT jboolean JNICALL Java_wrapper_Marker_JisValid(JNIEnv * env, jobject obj){
    Marker *m = getHandle<Marker>(env, obj);
    return (jboolean)(m->isValid());
}

JNIEXPORT jfloat JNICALL Java_wrapper_Marker_JgetArea (JNIEnv * env, jobject obj){
    Marker *m = getHandle<Marker>(env, obj);
    return (jfloat)(m->getArea());
}

JNIEXPORT void JNICALL Java_wrapper_Marker_Jdraw(JNIEnv * env, jobject obj, jlong img, jdoubleArray color, jint lineWidth, bool writeId){
    Marker *m = getHandle<Marker>(env, obj);
    cv::Mat* inMat = (cv::Mat*)img;
    
    double buf[4];
    env->GetDoubleArrayRegion(color,0,4,buf);

    Scalar scColor = Scalar(buf[0],buf[1],buf[2],buf[3]);
    
    m->draw(*inMat,scColor, lineWidth, writeId);
}

JNIEXPORT void JNICALL Java_wrapper_Marker_JglGetModelViewMatrix(JNIEnv * env, jobject obj, jdoubleArray modelview_matrix){
    Marker *m = getHandle<Marker>(env, obj);
    double buf[16];
    env->GetDoubleArrayRegion(modelview_matrix,0,16,buf);
    try{
        m->glGetModelViewMatrix(buf);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    } 
    env->SetDoubleArrayRegion(modelview_matrix,0,16,buf);
}

JNIEXPORT jfloat JNICALL Java_wrapper_Marker_JgetPerimeter(JNIEnv * env, jobject obj){
    Marker *m = getHandle<Marker>(env, obj);
    return (jfloat) m->getPerimeter();
}

JNIEXPORT jobject JNICALL Java_wrapper_Marker_JgetCenter(JNIEnv * env, jobject obj){
    Marker *m = getHandle<Marker>(env, obj);
    Point a = m->getCenter();
    
    jclass Point_class = env->FindClass("org/opencv/core/Point");
    jmethodID constructor = env->GetMethodID(Point_class,"<init>","(DD)V");
    jobject returnedPoint = env->NewObject(Point_class,constructor,(jdouble)a.x,(jdouble)a.y);

    env->DeleteLocalRef(Point_class);
    
    return returnedPoint;
}

JNIEXPORT void JNICALL Java_wrapper_Marker_JcalculateExtrinsics__FLwrapper_CameraParameters_2Z(JNIEnv * env, jobject obj, jfloat markerSize, jobject cameraParameters, jboolean setYPerpendicular){
    Marker *m = getHandle<Marker>(env, obj);
    aruco::CameraParameters *camParam = getHandle<CameraParameters>(env, cameraParameters);
    try{
        m->calculateExtrinsics((float)markerSize, *camParam, (bool)setYPerpendicular);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    } 
  }

JNIEXPORT void JNICALL Java_wrapper_Marker_JcalculateExtrinsics__FLorg_opencv_core_Mat_2Lorg_opencv_core_Mat_2Z(JNIEnv * env, jobject obj, jfloat markerSizeMeters, jlong cameraMatrix, jlong distCoeff, jboolean setYPerpendicular){
    Marker *m = getHandle<Marker>(env, obj);
    cv::Mat* camMat = (cv::Mat*)cameraMatrix;
    cv::Mat* distCoefficient = (cv::Mat*)distCoeff;
    try{
        m->calculateExtrinsics((float)markerSizeMeters, *camMat, *distCoefficient, (bool) setYPerpendicular);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
  }

JNIEXPORT void JNICALL Java_wrapper_Marker_JOgreGetPoseParameters(JNIEnv *env, jobject obj, jdoubleArray pos, jdoubleArray ori){
    Marker *m = getHandle<Marker>(env, obj);
    double position[3];
    double orientation[4];
    env->GetDoubleArrayRegion(pos,0,3,position);
    env->GetDoubleArrayRegion(ori,0,4,orientation);
    
    try{
        m->OgreGetPoseParameters(position,orientation);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    } 
    
    env->SetDoubleArrayRegion(pos,0,3,position);
    env->SetDoubleArrayRegion(ori,0,4,orientation);
}