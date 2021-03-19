cmake_minimum_required(VERSION 3.10)

# set the project name
project(VulkanTest VERSION 1.0)
# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(glfw3 SHARED IMPORTED 3pp/glfw)
add_library(glm STATIC IMPORTED 3pp/glm)
add_subdirectory(src)
find_library(VULKAN_LIB vulkan-1 HINTS 3pp/vulkan/Lib)
find_library(GLFW3_LIB glfw3 HINTS 3pp/glfw)