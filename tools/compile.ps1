
$glslc = "D:\Code\VulkanSDK\Bin\glslc.exe"
$shader_files = Get-ChildItem "..\assets\shaders\"
foreach($shader in $shader_files)
{
    $output = $shader.Fullname + ".spv"
    & $glslc $shader.Fullname -o $output
}
