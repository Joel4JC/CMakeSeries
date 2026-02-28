#[[
        READ: A journey across static and dynamic libraries
              https://www.internalpointers.com/post/journey-across-static-dynamic-libraries

        - Setting up static libraries
                - embedded
        
]]
cmake_minimum_required(VERSION 3.28)

#Create project
project(HelloApp
        VERSION 0.0.0
        DESCRIPTION "The leading Hello World App"
        LANGUAGES C CXX)

# Set the C++ standard for the project
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Static Library Target
add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(operations PUBLIC cxx_std_20)

# List Sources Files
add_executable(HelloAppBinary src/main.cpp
                src/dog.cpp
                src/log.cpp)

# Targets
target_include_directories(HelloAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(HelloAppBinary PUBLIC cxx_std_20)
target_link_libraries(HelloAppBinary PUBLIC operations)

