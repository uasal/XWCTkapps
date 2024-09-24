cmake_minimum_required(VERSION 3.10)

project(XWCTkapps VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#######################################
## Set default library type
#######################################

# Set default to build shared libraries
set(BUILD_SHARED_LIBS ON)

#######################################
## Define common folder locations 
## and ensure they exist
#######################################
include(GNUInstallDirs) # standard module to guarantee portable project layout

# Define base variables with optional default values
set(MAGAOX_PREFIX "/opt/MagAOX" CACHE PATH "Base directory for MagAOX vendor packages, configs, drivers, apps & logs")

# Check if MAGAOX_PREFIX exists
if(NOT EXISTS "${MAGAOX_PREFIX}")
    message(WARNING "Required directory ${MAGAOX_PREFIX} does not exist.")
endif()

#######################################
## Check dependencies exist
#######################################

find_package(XWCTK REQUIRED)

if(NOT XWCTK_FOUND)
    message(FATAL_ERROR "Package XWCTK not found. Please install it.")
endif()

#######################################
## Add subfolders
#######################################

foreach(SUBDIR ${SUBDIRECTORIES})
    # Don't add the logger and template folders
    if(NOT (subdir STREQUAL "logger" OR subdir STREQUAL "template"))
        message(STATUS "Adding subdirectory ${subdir}")
        add_subdirectory(${SUBDIR})        
    endif()
endforeach()