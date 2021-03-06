# Locate YAJL library
# This module defines
#  YAJL_FOUND, if false, do not try to link to YAJL 
#  YAJL_LIBRARIES
#  YAJL_INCLUDE_DIR, where to find yajl_*.h 


FIND_PATH(YAJL_INCLUDE_DIR yajl/yajl_version.h
  HINTS
  ${YAJL_DIR} $ENV{YAJL_DIR}
  PATH_SUFFIXES include
  PATHS
  ~/Library/Frameworks
  /Library/Frameworks
  /usr/local
  /usr
  /sw # Fink
  /opt/local # DarwinPorts
  /opt/csw # Blastwave
  /opt
)

FIND_LIBRARY(YAJL_LIBRARY_RELEASE 
  NAMES yajl yajl_s
  HINTS
  ${YAJL_DIR} $ENV{YAJL_DIR}
  PATH_SUFFIXES lib64 lib
  PATHS
  ~/Library/Frameworks
  /Library/Frameworks
  /usr/local
  /usr
  /sw
  /opt/local
  /opt/csw
  /opt
)

FIND_LIBRARY(YAJL_LIBRARY_DEBUG 
  NAMES yajld yajl_sd
  HINTS
  ${YAJL_DIR} $ENV{YAJL_DIR}
  PATH_SUFFIXES lib64 lib
  PATHS
  ~/Library/Frameworks
  /Library/Frameworks
  /usr/local
  /usr
  /sw
  /opt/local
  /opt/csw
  /opt
)

IF(YAJL_LIBRARY_DEBUG AND YAJL_LIBRARY_RELEASE)
  SET(YAJL_LIBRARY optimized ${YAJL_LIBRARY_RELEASE} debug ${YAJL_LIBRARY_DEBUG} )
  GET_FILENAME_COMPONENT(YAJL_FILENAME ${YAJL_LIBRARY_RELEASE} NAME_WE)
ELSEIF(YAJL_LIBRARY_RELEASE)
  SET(YAJL_LIBRARY ${YAJL_LIBRARY_RELEASE} )
  GET_FILENAME_COMPONENT(YAJL_FILENAME ${YAJL_LIBRARY_RELEASE} NAME_WE)
ELSEIF(YAJL_LIBRARY_DEBUG)
  SET(YAJL_LIBRARY ${YAJL_LIBRARY_DEBUG} )
  GET_FILENAME_COMPONENT(YAJL_FILENAME ${YAJL_LIBRARY_DEBUG} NAME_WE)
ENDIF()

STRING(FIND ${YAJL_FILENAME} yajl_s YAJL_STATIC)

IF(YAJL_STATIC EQUAL -1)
  ADD_DEFINITIONS(-DYAJL_SHARED)
ENDIF()

SET( YAJL_LIBRARIES "${YAJL_LIBRARY}" CACHE STRING "YAJL Libraries")

INCLUDE(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set YAJL_FOUND to TRUE if 
# all listed variables are TRUE
FIND_PACKAGE_HANDLE_STANDARD_ARGS(YAJL  DEFAULT_MSG  YAJL_LIBRARIES YAJL_INCLUDE_DIR)

MARK_AS_ADVANCED(YAJL_INCLUDE_DIR YAJL_LIBRARIES YAJL_LIBRARY YAJL_LIBRARY_RELEASE YAJL_LIBRARY_DEBUG)
