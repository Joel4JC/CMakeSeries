#[[
        READ: A journey across static and dynamic libraries
              https://www.internalpointers.com/post/journey-across-static-dynamic-libraries

        - Setting up static libraries
                - Self Contained Static Library
                and
                - embedded
        - *.lib files are found in the build/Debug Directory

        LINUX @ 29:10
        - library files in *.a     
        
]]
cmake_minimum_required(VERSION 3.28)

#Create project
project(HelloApp
        VERSION 0.0.0
        DESCRIPTION "The leading Hello World App"
        LANGUAGES C CXX)

# Set the C++ standard for the project
set(CXX_STANDARD_REQUIRED ON)  # Make C++23 a hard requirement
set(CMAKE_CXX_STANDARD 23)  # Default C++ standard for targets

# Embedded Static Library Target
add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Self Contained Static Library Target
add_library(logger STATIC logger/src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)

# List Sources Files
add_executable(HelloAppBinary src/main.cpp
                src/dog.cpp)

# Targets
target_include_directories(HelloAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(HelloAppBinary PUBLIC operations logger)

