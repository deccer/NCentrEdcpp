#pragma once

#include <NCentrEd.Client.Engine/Application.hpp>
#inclued <NCentrEd.Client.Engine/IGraphicsPipeline.hpp>

class ClientApplication : Application
{
protected:
    bool Load() override;
    void RenderScene() override;
    void RenderUI() override;
private:
    IGraphicsPipeline* _graphicsPipeline = nullptr;
};
