//
// Created by Fkkt on 2023/9/7.
//

#ifndef OPENGL_DEMO_MAIN_H
#define OPENGL_DEMO_MAIN_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

#endif //OPENGL_DEMO_MAIN_H
