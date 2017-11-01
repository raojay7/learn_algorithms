cmake_minimum_required(VERSION 3.8)
project(learn_algorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp vector_exercise.cpp vector_exercise.h)
add_executable(learn_algorithms ${SOURCE_FILES})