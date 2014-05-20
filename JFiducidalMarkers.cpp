#include "JFiducidalMarkers.h"
#include "Handle.h"
#include <cstdlib>
#include <aruco.h>
#include <arucofidmarkers.h> 
#include <cv.h> 

using namespace std;
using namespace aruco;
using namespace cv;


JNIEXPORT void JNICALL Java_wrapper_FiducidalMarkers_JcreateMarkerImage(JNIEnv * env, jobject obj, jint id, jint size, jlong matAddr){
    FiducidalMarkers *fm = getHandle<FiducidalMarkers>(env,obj);
    cv::Mat* returnedValue = (cv::Mat*)matAddr;
    returnedValue->setTo(Scalar(0));
    try{
        *returnedValue = fm->createMarkerImage(id,size);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}


JNIEXPORT jint JNICALL Java_wrapper_FiducidalMarkers_Jdetect(JNIEnv * env, jobject obj, jlong inAddr, jint nRotations){
    FiducidalMarkers *fm = getHandle<FiducidalMarkers>(env,obj);
    cv::Mat* in = (cv::Mat*)inAddr;

    try{
        fm->detect(*in,nRotations);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    } 
}


JNIEXPORT void JNICALL Java_wrapper_FiducidalMarkers_JgetMarkerMat(JNIEnv * env, jobject obj, jint id, jlong matAddr){
    FiducidalMarkers *fm = getHandle<FiducidalMarkers>(env,obj);
    cv::Mat* returnedValue = (cv::Mat*)matAddr;
    returnedValue->setTo(Scalar(0));
    try{
        *returnedValue = fm->getMarkerMat(id);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
    
}


JNIEXPORT void JNICALL Java_wrapper_FiducidalMarkers_JcreateBoardImage(JNIEnv * env, jobject obj, jdouble width, jdouble height, jint MarkerSize, jint MarkerDistance, jobject TInfo, jobject excludedIds, jlong matAddr){
    FiducidalMarkers *fm = getHandle<FiducidalMarkers>(env,obj);
    cv::Mat* returnedValue = (cv::Mat*)matAddr;
    jclass ArrayList_class = env->FindClass( "java/util/ArrayList" );
    jmethodID size_method = env->GetMethodID( ArrayList_class, "size", "()I");
    jmethodID get_method = env->GetMethodID(ArrayList_class,"get", "(I)Ljava/lang/Object;");
    jclass Integer_class = env->FindClass("java/lang/Integer");
    jmethodID intValue_method = env->GetMethodID(Integer_class,"intValue","()I");
    int sizeOfVector = env->CallIntMethod(excludedIds,size_method);
    vector <int> excluded(sizeOfVector);

    BoardConfiguration * auxBC = getHandle<BoardConfiguration>(env,TInfo);
    
    Size size(width,height);
    for(int i=0;i<sizeOfVector;i++){
        jobject integer = env->CallObjectMethod(excludedIds,get_method,i);
        int aux = env->CallIntMethod(integer,intValue_method);
        excluded[i]=aux;
    }
    
    
    try{
        *returnedValue = fm->createBoardImage(size, (int)MarkerSize, (int)MarkerDistance, *auxBC, &excluded);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}


JNIEXPORT void JNICALL Java_wrapper_FiducidalMarkers_JcreateBoardImage_1ChessBoard(JNIEnv * env, jobject obj, jdouble width, jdouble height, jint MarkerSize, jobject TInfo, jboolean setDataCentered, jobject excludedIds, jlong matAddr){
    FiducidalMarkers *fm = getHandle<FiducidalMarkers>(env,obj);
    cv::Mat* returnedValue = (cv::Mat*)matAddr;
    Size size(width,height);
    jclass ArrayList_class = env->FindClass( "java/util/ArrayList" );
    jmethodID size_method = env->GetMethodID( ArrayList_class, "size", "()I");
    jmethodID get_method = env->GetMethodID(ArrayList_class,"get", "(I)Ljava/lang/Object;");
    jclass Integer_class = env->FindClass("java/lang/Integer");
    jmethodID intValue_method = env->GetMethodID(Integer_class,"intValue","()I");
    int sizeOfVector = env->CallIntMethod(excludedIds,size_method);
    vector <int> excluded(sizeOfVector);
    
    BoardConfiguration * auxBC = getHandle<BoardConfiguration>(env,TInfo);
     for(int i=0;i<sizeOfVector;i++){
        jobject integer = env->CallObjectMethod(excludedIds,get_method,i);
        int aux = env->CallIntMethod(integer,intValue_method);
        excluded[i]=aux;
    }
    
    try{
        *returnedValue = fm->createBoardImage_ChessBoard(size,(int)MarkerSize, *auxBC, (bool) setDataCentered, &excluded);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }    
}


JNIEXPORT void JNICALL Java_wrapper_FiducidalMarkers_JcreateBoardImage_1Frame(JNIEnv * env, jobject obj, jdouble width, jdouble height, jint MarkerSize, jint MarkerDistance, jobject TInfo, jboolean setDataCentered, jobject excludedIds, jlong matAddr){
    FiducidalMarkers *fm = getHandle<FiducidalMarkers>(env,obj);
    cv::Mat* returnedValue = (cv::Mat*)matAddr;
    Size size(width,height);
    jclass ArrayList_class = env->FindClass( "java/util/ArrayList" );
    jmethodID size_method = env->GetMethodID( ArrayList_class, "size", "()I");
    jmethodID get_method = env->GetMethodID(ArrayList_class,"get", "(I)Ljava/lang/Object;");
    jclass Integer_class = env->FindClass("java/lang/Integer");
    jmethodID intValue_method = env->GetMethodID(Integer_class,"intValue","()I");
    int sizeOfVector = env->CallIntMethod(excludedIds,size_method);
    vector <int> excluded(sizeOfVector);
    
    BoardConfiguration * auxBC = getHandle<BoardConfiguration>(env,TInfo);
     for(int i=0;i<sizeOfVector;i++){
        jobject integer = env->CallObjectMethod(excludedIds,get_method,i);
        int aux = env->CallIntMethod(integer,intValue_method);
        excluded[i]=aux;
    }
    
    try{
       *returnedValue = fm->createBoardImage_Frame(size,(int)MarkerSize, (int)MarkerDistance, *auxBC, (bool)setDataCentered, &excluded);
    }catch(cv::Exception e){
        newJavaException(env, "java/lang/Exception", e.what());
    }
}

