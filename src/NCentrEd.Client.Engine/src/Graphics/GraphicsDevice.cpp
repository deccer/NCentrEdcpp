#include <NCentrEd.Client.Engine/Graphics/IComputePipeline.hpp>
#include <NCentrEd.Client.Engine/Graphics/ComputePipelineDescriptor.hpp>
#include <NCentrEd.Client.Engine/Graphics/IGraphicsDevice.hpp>
#include <NCentrEd.Client.Engine/Graphics/IGraphicsPipeline.hpp>
#include <NCentrEd.Client.Engine/Graphics/GraphicsPipelineDescriptor.hpp>

void GraphicsDevice::BindComputePipeline(const IComputePipeline& computePipeline)
{
}

void GraphicsDevice::BindGraphicsPipeline(const IGraphicsPipeline& graphicsPipeline)
{
}

std::unique_ptr<IComputePipeline> GraphicsDevice::CreateComputePipeline(const ComputePipelineDescriptor& computePipelineDescriptor)
{
    return std::make_unique<ComputePipeline>();
}

std::unique_ptr<IGraphicsPipeline> GraphicsDevice::CreateGraphicsPipeline(const GraphicsPipelineDescriptor& graphicsPipelineDescriptor)
{
    return std::make_unique<GraphicsPipeline>();
}