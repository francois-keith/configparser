# - Config file for the configparser library
# It defines the following variables
#
#  CONFIGPARSER_INCLUDE_DIRS - include directories for FooBar
#  CONFIGPARSER_LIBRARY_DIRS - library directories for FooBar (normally not used!)
#  CONFIGPARSER_LIBRARIES    - libraries to link against
#  CONFIGPARSER_EXECUTABLE   - the bar executable
 
# Tell the user project where to find our headers and libraries

set(CONFIGPARSER_INCLUDE_DIRS "/home/milliez/devel/include")
set(CONFIGPARSER_LIBRARY_DIRS "/home/milliez/devel/lib")
  
# These are IMPORTED targets created by FooBarLibraryDepends.cmake

set(CONFIGPARSER_LIBRARIES configparser)
