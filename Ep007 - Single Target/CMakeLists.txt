#[[
        - Introduction : Everything in a single target
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

# List Sources Files
add_executable(HelloAppBinary src/main.cpp
                src/dog.cpp
                src/log.cpp
                src/operations.cpp)

# Targets
target_include_directories(HelloAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(HelloAppBinary PUBLIC cxx_std_20)

