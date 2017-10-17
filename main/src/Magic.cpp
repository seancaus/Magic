//
// Created by huxf on 2017/10/16.
//

#include "Magic.h"
#include "../../RenderSystems/GL/include/GLRenderSystem.h"

using namespace std;

namespace Magic
{
    //---------------------------------------------------------------------
    Magic::Magic()
    {
        _activeRender = make_shared<GLRenderSystem>();
    }

    //---------------------------------------------------------------------
    Magic::~Magic()
    {

    }

    std::shared_ptr<RenderWindow> Magic::createRenderWindow(const string &title, const unsigned int width, const unsigned int height, bool fullScreen)
    {
        return _activeRender->createRenderWindow(title,width,height,fullScreen);
    }
}