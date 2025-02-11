#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "iostream"
#include "common_func.h"

void checkShaderCompileStatus(int shaderOrProgram)
{
    int  success;
    char infoLog[512];
    glGetShaderiv(shaderOrProgram, GL_COMPILE_STATUS, &success);
    if(!success) {
        glGetProgramInfoLog(shaderOrProgram, 512, NULL, infoLog);
        std::cout << "ERROR: Thingo Crashed\n" << infoLog << std::endl;
    }
}