#pragma once

#include <NCentrEd.Client.Engine/Graphics/GraphicsPipelineDescriptor.hpp>

class GraphicsPipelineDescriptorBuilder
{
public:
    GraphicsPipelineDescriptor Build(const std::string& label);
private:
    GraphicsPipelineDescriptor _graphicsPipelineDescriptor = {};
};