//
// Created by huxf on 2017/10/17.
//

#ifndef PROJECT_RENDERWINDOW_H
#define PROJECT_RENDERWINDOW_H

#include <string>

namespace Magic
{
    class RenderWindow {

    public:
        RenderWindow();
        RenderWindow(const std::string &title, const unsigned int width, const unsigned int height, bool fullScreen);
        virtual ~RenderWindow();

    protected:
        std::string _title;
        unsigned int _width;
        unsigned int _height;
    };
}


#endif //PROJECT_RENDERWINDOW_H
