//
// Created by huxf on 2017/10/17.
//

#ifndef PROJECT_RENDERSYSTEM_H
#define PROJECT_RENDERSYSTEM_H

#include <memory>

namespace Magic {

    class RenderWindow;

    class RenderSystem {
    public:
        RenderSystem();
        ~RenderSystem();

        virtual std::shared_ptr<RenderWindow> createRenderWindow(const std::string &title, const unsigned int width, const unsigned int height, bool fullScreen)
        {
            return nullptr;
        }
    };

}

#endif //PROJECT_RENDERSYSTEM_H
