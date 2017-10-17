//
// Created by huxf on 2017/10/16.
//

#include "GLFWWindow.h"
#include "GLFW/glfw3.h"

GLFWWindow::GLFWWindow():_window(nullptr)
{
    init();
}

void GLFWWindow::init()
{
    if(_window)
    {

    }

    _window = glfwCreateWindow(500,500,"",nullptr,nullptr);
}

GLFWWindow::~GLFWWindow() {

}
