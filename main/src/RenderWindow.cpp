//
// Created by huxf on 2017/10/17.
//

#include "RenderWindow.h"

using namespace std;

namespace Magic
{
    RenderWindow::RenderWindow()
    {

    }

    RenderWindow::RenderWindow(const string &title, const unsigned int width, const unsigned int height, bool fullScreen):
    _title(title.c_str())
    ,_width(width)
    ,_height(height)
    {

    }

    RenderWindow::~RenderWindow()
    {

    }
}