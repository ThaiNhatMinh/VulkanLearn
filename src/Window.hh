#pragma once

#include <string>

#include <glfw/glfw3.h>

class Window
{
public:
    const std::size_t WIDTH = 800;
    const std::size_t HEIGHT = 800;
    const std::string NAME = "VulkanTest";

public:
    Window();
    ~Window();

    int ShouldClose();

private:
    GLFWwindow* m_pWindow;

    friend class Vulkan;
};