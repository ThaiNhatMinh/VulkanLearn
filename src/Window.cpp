#include "Window.hh"

Window::Window()
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    m_pWindow = glfwCreateWindow(WIDTH, HEIGHT, NAME.c_str(), nullptr, nullptr);
}

Window::~Window()
{
    glfwDestroyWindow(m_pWindow);
    glfwTerminate();
}

int Window::ShouldClose()
{
    return glfwWindowShouldClose(m_pWindow);
}