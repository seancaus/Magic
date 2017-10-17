cmake_minimum_required(VERSION 3.8)

project(tests)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_BUILE_TYPE DEBUG)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#-Wc++11-extensions

add_definitions(-DGLEW_STATIC)

include_directories(../main/include)

file(GLOB_RECURSE SOURCE_FILES *.cpp)

IF(APPLE)
    #SET(GUI_TYPE MACOSX_BUNDLE)
    FIND_LIBRARY(COCOA_LIBRARY Cocoa)
    FIND_LIBRARY(OPENGL_LIBRARY OpenGL)
    FIND_LIBRARY(COREVIDEO_LIBRARY CoreVideo)
    FIND_LIBRARY(IOKIT_LIBRARY IOKit)

    MARK_AS_ADVANCED (COCOA_LIBRARY
            OPENGL_LIBRARY
            COREVIDEO_LIBRARY
            IOKIT_LIBRARY
            )
    SET(EXTRA_LIBS ${COCOA_LIBRARY} ${OPENGL_LIBRARY} ${IOKIT_LIBRARY} ${COREVIDEO_LIBRARY} )
ELSEIF(WIN32)

ENDIF (APPLE)

link_directories(../deps/lib)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} ${EXTRA_LIBS} freetype-x86_64 GLEW glfw3 freeimage Magic GL)