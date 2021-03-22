#define GLFW_INCLUDE_VULKAN
#include <glfw/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

#include "Vulkan.hh"
#include "Window.hh"

int main()
{

    Window window;
    Vulkan vulkan(&window);

    while(!window.ShouldClose()) {
        glfwPollEvents();
        vulkan.Draw();
    }

    return 0;
}
