message(AAAAAAAAAAAAAAAAAAAAAAAAAAAasdAAA)
file(GLOB SHADER_FILES
     "..\\assets\\shaders\\*.frag"
     "..\\assets\\shaders\\*.vert"
)
message(${SHADER_FILES})

# foreach(file in $SHADERFILE)
#     message(${file})
# endforeach(file in $SHADERFILE)

# execute_process(COMMAND powershell .\\compile.ps1)