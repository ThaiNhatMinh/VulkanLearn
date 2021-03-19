#include <vulkan/vulkan.h>

class Vulkan
{
public:
    Vulkan();
    ~Vulkan();

private:
    void CreateInstance();
    void CheckExtensionSupport();
    bool CheckValidationLayerSupport();
private:
    VkInstance m_instance;
};