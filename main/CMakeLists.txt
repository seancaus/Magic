cmake_minimum_required(VERSION 3.8)

project(Magic)

include_directories(include)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

add_library(${PROJECT_NAME} ${SOURCE_FILES})