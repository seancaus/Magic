cmake_minimum_required(VERSION 3.8)

project(tests)

add_definitions(-DGLEW_STATIC)

include_directories(../deps/include)
include_directories(../main/include)

file(GLOB_RECURSE SOURCE_FILES *.cpp)

link_directories(../deps/lib)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} Magic glew glfw3 freetype freeimage)