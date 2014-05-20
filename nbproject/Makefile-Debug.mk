#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1237649074/JBoard.o \
	${OBJECTDIR}/_ext/1237649074/JBoardConfiguration.o \
	${OBJECTDIR}/_ext/1237649074/JBoardDetector.o \
	${OBJECTDIR}/_ext/1237649074/JCameraParameters.o \
	${OBJECTDIR}/_ext/1237649074/JFiducidalMarkers.o \
	${OBJECTDIR}/_ext/1237649074/JMarker.o \
	${OBJECTDIR}/_ext/1237649074/JMarkerDetector.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` 
 
CXXFLAGS=-fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` 
 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-Wl,-rpath,/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -Wl,-rpath,/usr/local/include/opencv2 -Wl,-rpath,/usr/local/include/opencv -Wl,-rpath,/home/jayzeegp/Descargas/opencv-2.4.8/release/lib /home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src/libaruco.so `pkg-config --cflags opencv` /home/jayzeegp/NetBeansProjects/WrapperCPP/dist/libopencv_core.so -lopencv_core -lopencv_highgui  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk dist/libWrapperCPP.so

dist/libWrapperCPP.so: /home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src/libaruco.so

dist/libWrapperCPP.so: /home/jayzeegp/NetBeansProjects/WrapperCPP/dist/libopencv_core.so

dist/libWrapperCPP.so: ${OBJECTFILES}
	${MKDIR} -p dist
	${LINK.cc} -o dist/libWrapperCPP.so ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/_ext/1237649074/JBoard.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoard.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/lib/jvm/java-7-openjdk-amd64/include -I/usr/lib/jvm/java-7-openjdk-amd64/include/linux -I/home/jayzeegp/PFC/Aruco/aruco-1.2.4/src -I/usr/local/include/opencv2 -I/home/jayzeegp/Descargas/opencv-2.4.8/release/lib -fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JBoard.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoard.cpp

${OBJECTDIR}/_ext/1237649074/JBoardConfiguration.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoardConfiguration.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/lib/jvm/java-7-openjdk-amd64/include -I/usr/lib/jvm/java-7-openjdk-amd64/include/linux -I/home/jayzeegp/PFC/Aruco/aruco-1.2.4/src -I/usr/local/include/opencv2 -I/home/jayzeegp/Descargas/opencv-2.4.8/release/lib -fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JBoardConfiguration.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoardConfiguration.cpp

${OBJECTDIR}/_ext/1237649074/JBoardDetector.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoardDetector.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/lib/jvm/java-7-openjdk-amd64/include -I/usr/lib/jvm/java-7-openjdk-amd64/include/linux -I/home/jayzeegp/PFC/Aruco/aruco-1.2.4/src -I/usr/local/include/opencv2 -I/home/jayzeegp/Descargas/opencv-2.4.8/release/lib -fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JBoardDetector.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoardDetector.cpp

${OBJECTDIR}/_ext/1237649074/JCameraParameters.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JCameraParameters.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/lib/jvm/java-7-openjdk-amd64/include -I/usr/lib/jvm/java-7-openjdk-amd64/include/linux -I/home/jayzeegp/PFC/Aruco/aruco-1.2.4/src -I/usr/local/include/opencv2 -I/home/jayzeegp/Descargas/opencv-2.4.8/release/lib -fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JCameraParameters.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JCameraParameters.cpp

${OBJECTDIR}/_ext/1237649074/JFiducidalMarkers.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JFiducidalMarkers.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/lib/jvm/java-7-openjdk-amd64/include -I/usr/lib/jvm/java-7-openjdk-amd64/include/linux -I/home/jayzeegp/PFC/Aruco/aruco-1.2.4/src -I/usr/local/include/opencv2 -I/home/jayzeegp/Descargas/opencv-2.4.8/release/lib -fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JFiducidalMarkers.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JFiducidalMarkers.cpp

${OBJECTDIR}/_ext/1237649074/JMarker.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JMarker.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/lib/jvm/java-7-openjdk-amd64/include -I/usr/lib/jvm/java-7-openjdk-amd64/include/linux -I/home/jayzeegp/PFC/Aruco/aruco-1.2.4/src -I/usr/local/include/opencv2 -I/home/jayzeegp/Descargas/opencv-2.4.8/release/lib -fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JMarker.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JMarker.cpp

${OBJECTDIR}/_ext/1237649074/JMarkerDetector.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JMarkerDetector.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -g -I/usr/lib/jvm/java-7-openjdk-amd64/include -I/usr/lib/jvm/java-7-openjdk-amd64/include/linux -I/home/jayzeegp/PFC/Aruco/aruco-1.2.4/src -I/usr/local/include/opencv2 -I/home/jayzeegp/Descargas/opencv-2.4.8/release/lib -fPIC -shared -static-libgcc -static-libstdc++ -L/home/jayzeegp/PFC/Aruco/aruco-1.2.4/build/src -g -g -I/usr/local/include/opencv2 `pkg-config --cflags opencv` -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JMarkerDetector.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JMarkerDetector.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} dist/libWrapperCPP.so

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
