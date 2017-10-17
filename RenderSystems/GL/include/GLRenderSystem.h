//
// Created by huxf on 2017/10/17.
//

#ifndef PROJECT_GLRENDERSYSTEM_H
#define PROJECT_GLRENDERSYSTEM_H

#include "RenderSystem.h"

namespace Magic {
    class GLRenderSystem :public RenderSystem{

    public:
        std::shared_ptr<RenderWindow>createRenderWindow(const std::string &title, const unsigned int width, const unsigned int height, bool fullScreen)override;
    };
}


#endif //PROJECT_GLRENDERSYSTEM_H
