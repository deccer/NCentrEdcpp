cmake_minimum_required(VERSION 3.14)
project(NCentrEd.Client)

target_include_directories(imgui PUBLIC include)
target_include_directories(spdlog PUBLIC include)

set(sourceFiles
    src/Main.cpp
)
set(headerFiles
)
add_executable(NCentrEd.Client ${sourceFiles} ${headerFiles})

target_include_directories(NCentrEd.Client PRIVATE include)
target_include_directories(NCentrEd.Client.Engine PUBLIC include)
target_link_libraries(NCentrEd.Client PRIVATE glfw glad imgui spdlog NCentrEd.Client.Engine)
