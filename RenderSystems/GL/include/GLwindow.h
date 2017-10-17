//
// Created by huxf on 2017/10/16.
//

#ifndef PROJECT_GLWINDOW_H
#define PROJECT_GLWINDOW_H

#include <string>
#include "RenderWindow.h"

class GLFWwindow;

namespace Magic {

    class GLWindow : public RenderWindow {

    public:
//        GLWindow();
        GLWindow(const std::string &title, const unsigned int width, const unsigned int height, bool fullScreen);

        virtual ~GLWindow();

        void init();

        void show();

    protected:
        GLFWwindow *_window;

    };
}

#endif //PROJECT_GLEWWINDOW_H
