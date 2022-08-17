cmake_minimum_required(VERSION 3.14)
project(NCentrEd.Client.Engine)

add_subdirectory(lib)

set(sourceFiles
    src/Application.cpp
    src/Graphics/ComputePipeline.cpp
    src/Graphics/ComputePipelineDescriptorBuilder.cpp
    src/Graphics/GraphicsDevice.cpp
    src/Graphics/GraphicsPipeline.cpp
    src/Graphics/GraphicsPipelineDescriptorBuilder.cpp
)

set(headerFiles
    include/NCentrEd.Client.Engine/Application.hpp
    include/NCentrEd.Client.Engine/Graphics/IComputePipeline.hpp
    include/NCentrEd.Client.Engine/Graphics/ComputePipeline.hpp
    include/NCentrEd.Client.Engine/Graphics/ComputePipelineDescriptorBuilder.hpp
    include/NCentrEd.Client.Engine/Graphics/IGraphicsDevice.hpp
    include/NCentrEd.Client.Engine/Graphics/IGraphicsPipeline.hpp
    include/NCentrEd.Client.Engine/Graphics/GraphicsPipeline.hpp
    include/NCentrEd.Client.Engine/Graphics/GraphicsPipelineDescriptorBuilder.hpp
)
add_library(NCentrEd.Client.Engine ${sourceFiles} ${headerFiles})

find_package(OpenGL REQUIRED)

target_include_directories(glfw PUBLIC include)
target_include_directories(glad PUBLIC include)
target_include_directories(imgui PUBLIC include)
target_include_directories(spdlog PUBLIC include)
target_include_directories(NCentrEd.Client.Engine PRIVATE include)

target_link_libraries(NCentrEd.Client.Engine PRIVATE glfw glad TracyClient spdlog imgui)


