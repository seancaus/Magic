//
// Created by huxf on 2017/10/16.
//

#ifndef PROJECT_GLEWWINDOW_H
#define PROJECT_GLEWWINDOW_H

#include "Window.h"

using  namespace Magic;

class GLFWwindow;

class GLFWWindow : public Window{

public:
    GLFWWindow();
    virtual ~GLFWWindow();

    void init();

protected:
    GLFWwindow* _window;

};


#endif //PROJECT_GLEWWINDOW_H
