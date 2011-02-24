### CMake file for configparser library
###
###    From the off-tree build directory, invoke:
###	 cmake <PATH_TO_lib_configparser>
###
###
###   - Feb 2010: Initial version <druon@lirmm.fr>
###
###
###############################################################################


cmake_minimum_required (VERSION 2.6)

project (configparser)
set (configparser_VERSION_MAJOR 0)
set (configparser_VERSION_MINOR 1)

set( CMAKE_LIBRARY_PATH ${CMAKE_LIBRARY_PATH} /lib /usr/lib /usr/local/lib )
set( CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} /usr/include /usr/local/include )
set( CMAKE_MODULE_PATH  ${CMAKE_MODULE_PATH}  "${PROJECT_SOURCE_DIR}/cmake" ) 

set ( INSTALL_BIN_PATH  bin )
set ( INSTALL_LIB_PATH  lib )
set ( INSTALL_AR_PATH   lib )
set ( INSTALL_HEADERS_PATH include )


# Make relative paths absolute (needed later on)

foreach(p LIB BIN HEADERS AR)
	set(var INSTALL_${p}_PATH)
	if(NOT IS_ABSOLUTE "${${var}}")
		set(${var} "${CMAKE_INSTALL_PREFIX}/${${var}}")
	endif()
endforeach()

### guard against in-source builds

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
  message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there. You may need to remove CMakeCache.txt. ")
endif()


### Configure a header file to pass some of the CMake settings
### to the source code

configure_file (
	"${PROJECT_SOURCE_DIR}/Config.h.in"
	"${PROJECT_SOURCE_DIR}/src/Config.h"
)


### Search for Lib/Headers



### Set include directories 
        
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include"
		    "${CMAKE_CURRENT_SOURCE_DIR}/src"
	            "${CMAKE_CURRENT_BINARY_DIR}" )


### File Lists

file( GLOB lib_srcs "src/*.c" "src/*.cpp" "src/*.cc" )
file( GLOB lib_int_hdrs "src/*.h*")
file( GLOB lib_hdrs "include/configparser/*.h*")


### Targets

add_library( "configparser" SHARED ${lib_srcs} ${lib_hdrs} ${lib_int_hdrs})

### install

install( TARGETS "configparser"
	    RUNTIME DESTINATION ${INSTALL_BIN_PATH}  COMPONENT main
	    LIBRARY DESTINATION ${INSTALL_LIB_PATH}  COMPONENT main
	    ARCHIVE DESTINATION ${INSTALL_AR_PATH}   COMPONENT main )

install( FILES ${lib_hdrs}
	    DESTINATION ${INSTALL_HEADERS_PATH}/configparser/${name}
	    COMPONENT main )
### test

configure_file(configparserConfig.cmake.in "${PROJECT_BINARY_DIR}/configparserConfig.cmake" @ONLY)

install ( FILES "${PROJECT_BINARY_DIR}/configparserConfig.cmake" 
	  DESTINATION "${INSTALL_LIB_PATH}/configparser" COMPONENT dev )  
        

