cmake_minimum_required(VERSION 3.14)
project(NCentrEd.Client.Engine)

add_subdirectory(lib)

set(sourceFiles
    src/Application.cpp
)

set(headerFiles
    include/NCentrEd.Client.Engine/Application.hpp
)
add_library(NCentrEd.Client.Engine ${sourceFiles} ${headerFiles})

find_package(OpenGL REQUIRED)

target_include_directories(glfw PUBLIC include)
target_include_directories(glad PUBLIC include)
target_include_directories(imgui PUBLIC include)
target_include_directories(spdlog PUBLIC include)
target_include_directories(NCentrEd.Client.Engine PRIVATE include)

target_link_libraries(NCentrEd.Client.Engine PRIVATE glfw glad TracyClient spdlog imgui)


