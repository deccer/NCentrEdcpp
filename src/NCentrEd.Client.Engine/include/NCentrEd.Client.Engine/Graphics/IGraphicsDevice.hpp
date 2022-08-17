#pragma once

#include <NCentrEd.Client.Engine/Graphics/ComputePipelineDescriptor.hpp>
#include <NCentrEd.Client.Engine/Graphics/GraphicsPipelineDescriptor.hpp>

struct IGraphicsPipeline;
struct IComputePipeline;

struct IGraphicsDevice
{
public:
    virtual void BindComputePipeline(const IComputePipeline& computePipeline) = 0;
    virtual void BindGraphicsPipeline(const IGraphicsPipeline& graphicsPipeline) = 0;

    virtual IComputePipeline CreateComputePipeline(const ComputePipelineDescriptor& computePipelineDescriptor) = 0;
    virtual IGraphicsPipeline CreateGraphicsPipeline(const GraphicsPipelineDescriptor& graphicsPipelineDescriptor) = 0;
};