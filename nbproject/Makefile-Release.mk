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
CND_CONF=Release
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
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libWrapperCPP.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libWrapperCPP.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libWrapperCPP.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/_ext/1237649074/JBoard.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoard.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JBoard.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoard.cpp

${OBJECTDIR}/_ext/1237649074/JBoardConfiguration.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoardConfiguration.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JBoardConfiguration.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoardConfiguration.cpp

${OBJECTDIR}/_ext/1237649074/JBoardDetector.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoardDetector.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JBoardDetector.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JBoardDetector.cpp

${OBJECTDIR}/_ext/1237649074/JCameraParameters.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JCameraParameters.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JCameraParameters.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JCameraParameters.cpp

${OBJECTDIR}/_ext/1237649074/JFiducidalMarkers.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JFiducidalMarkers.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JFiducidalMarkers.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JFiducidalMarkers.cpp

${OBJECTDIR}/_ext/1237649074/JMarker.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JMarker.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JMarker.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JMarker.cpp

${OBJECTDIR}/_ext/1237649074/JMarkerDetector.o: /home/jayzeegp/NetBeansProjects/WrapperCPP/JMarkerDetector.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1237649074
	${RM} $@.d
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1237649074/JMarkerDetector.o /home/jayzeegp/NetBeansProjects/WrapperCPP/JMarkerDetector.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libWrapperCPP.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
