#pragma once

#include <NCentrEd.Client.Engine/Graphics/ComputePipelineDescriptor.hpp>

class ComputePipelineDescriptorBuilder
{
public:
    ComputePipelineDescriptor Build(const std::string& label);
private:
    ComputePipelineDescriptor _computePipelineDescriptor = {};
};