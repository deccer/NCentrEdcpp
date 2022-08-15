#include <NCentrEd.Client.Engine/Application.hpp>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_glfw.h>
#include <spdlog/spdlog.h>
#include <tracy/Tracy.hpp>
#include <tracy/TracyOpenGL.hpp>

#include <iostream>

void Application::Run()
{
    FrameMarkStart("App Run");
    if (!Initialize())
    {
        return;
    }

    spdlog::info("APP - Initialized");

    if (!Load())
    {
        return;
    }

    spdlog::info("APP - Loaded");

    while (!glfwWindowShouldClose(_windowHandle))
    {
        glfwPollEvents();
        Update();
        Render();
    }

    spdlog::info("APP - Unloading");

    Unload();

    spdlog::info("APP - Unloaded");
    FrameMarkEnd("App Run");
}

bool Application::Initialize()
{
    if (!glfwInit())
    {
        spdlog::error("GLFW - Unable to initialize");
        return false;
    }

    glfwWindowHint(GLFW_DECORATED, GLFW_TRUE);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
    glfwWindowHint(GLFW_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_SCALE_TO_MONITOR, GLFW_TRUE);

    _windowHandle = glfwCreateWindow(1920, 1080, "UOStudio", nullptr, nullptr);
    if (_windowHandle == nullptr)
    {
        spdlog::error("GLFW - Unable to create window");
        return false;
    }

    glfwMakeContextCurrent(_windowHandle);
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    ImGui::CreateContext();
    ImGui_ImplGlfw_InitForOpenGL(_windowHandle, true);
    ImGui_ImplOpenGL3_Init();
    ImGui::StyleColorsDark();

    return true;
}

bool Application::Load()
{
    glClearColor(0.7f, 0.5f, 0.2f, 1.0f);

    glfwSwapInterval(0);

    return true;
}

void Application::Unload()
{
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwTerminate();
}

void Application::Render()
{
    ZoneScopedC(tracy::Color::Red2);

    RenderScene();
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
    {
        RenderUI();
        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        ImGui::EndFrame();
    }

    glfwSwapBuffers(_windowHandle);
}

void Application::RenderScene()
{

}

void Application::RenderUI()
{
}

void Application::Update()
{

}