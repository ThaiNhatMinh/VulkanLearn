set(HEADERS Vulkan.hh Window.hh)
set(SOURCES_ Vulkan.cpp Window.cpp)
include_directories("..\\3pp")

add_library(src ${HEADERS} ${SOURCES_})

# add the executable
add_executable(main VulkanMain.cpp)

target_link_libraries(main PRIVATE ${VULKAN_LIB})
target_link_libraries(main PRIVATE ${GLFW3_LIB})
target_link_libraries(main PRIVATE src)
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
