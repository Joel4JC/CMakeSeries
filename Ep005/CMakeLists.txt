cmake_minimum_required(VERSION 3.5)

#Create project
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading Hello World App"
        LANGUAGES C CXX)

# Set the C++ standard for the project
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# List Sources Files
add_executable(HelloAppBinary src/main.cpp
                src/dog.cpp
                src/operations.cpp)

# Targets
target_compile_features(HelloAppBinary PRIVATE cxx_std_23)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

