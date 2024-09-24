cmake_minimum_required(VERSION 3.10)

project(templateCtrl VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(XWCTK REQUIRED)
if(NOT XWCTK_FOUND)
    message(FATAL_ERROR "Package XWCTK not found. Please install it.")
endif()

add_executable(templateCtrl templateCtrl.cpp)

target_compile_options(templateCtrl PRIVATE -Wall -g)

target_link_libraries(templateCtrl PRIVATE 
                                    XWCTK::XWCTKall
                                    )

install(TARGETS templateCtrl DESTINATION bin)