//
// Created by huxf on 2017/10/16.
//

#ifndef MAGIC_MAGIC_H
#define MAGIC_MAGIC_H

#include <string>
#include <memory>

namespace Magic
{
    class RenderWindow;
    class RenderSystem;

    class Magic
    {
    public:
        Magic();
        virtual ~Magic();

        std::shared_ptr<RenderWindow> createRenderWindow(const std::string &title, const unsigned int width, const unsigned int height, bool fullScreen);

    protected:
        std::shared_ptr<RenderSystem> _activeRender;
    };
}

#endif //MAGIC_MAGIC_H
