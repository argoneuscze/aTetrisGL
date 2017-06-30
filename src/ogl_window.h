#pragma once

#define GLFW_INCLUDE_NONE

#include <GLFW/glfw3.h>
#include <string>

class OGLWindow {
public:
    OGLWindow(int width, int height, std::string name);
    ~OGLWindow();

private:
    void startLoop();

    struct GLFWwindow* window;
};
