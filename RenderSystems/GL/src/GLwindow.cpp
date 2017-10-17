//
// Created by huxf on 2017/10/16.
//

#include <iostream>
#include "GLwindow.h"
#include "GL/glew.h"
#include "GLFW/glfw3.h"

using namespace std;
namespace Magic {

//    GLWindow::GLWindow()
//    {
//
//    }

    GLWindow::GLWindow(const std::string &title, const unsigned int width, const unsigned int height, bool fullScreen) :
            RenderWindow(title,width,height,fullScreen)
            ,_window(nullptr) {
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

        init();
    }

    GLWindow::~GLWindow() {

    }

    void GLWindow::init() {
        if (_window) {

        }

        _window = glfwCreateWindow(_width, _height, _title.c_str(), nullptr, nullptr);
        if (!_window) {
            //        LOG(FATAL) << "\"glfw\" Create Window Failed" << endl;
            glfwTerminate();
        }
        glfwMakeContextCurrent(_window);

        int width, height;
        glfwGetFramebufferSize(_window, &width, &height);
        glViewport(0, 0, width, height);

        glewExperimental = GL_TRUE;
        if (GLEW_OK != glewInit()) {
            //        LOG(FATAL) << "glew init Failed" << endl;
            cout << "glew init Failed" << endl;
        }
    }

    void GLWindow::show() {
        while (!glfwWindowShouldClose(_window)) {
            glfwPollEvents();

            glClearColor(.0f, .0f, .0f, .0f);
            glClear(GL_COLOR_BUFFER_BIT);

            //render
            glfwSwapBuffers(_window);
        }
        glfwTerminate();
    }
}