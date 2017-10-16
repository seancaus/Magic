cmake_minimum_required(VERSION 3.8)

project(tests)

include_directories(../main/include)

file(GLOB_RECURSE SOURCE_FILES *.cpp)

link_directories(../deps/lib)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} Magic glew glfw3)