#include "ogl_window.h"

#include <process.h>
#include "glad/glad.h"
#include <cstdio>

OGLWindow::OGLWindow(int width, int height, std::string name) {
    if (!glfwInit())
        exit(1);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    this->window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);

    if (!this->window)
        exit(2);

    glfwMakeContextCurrent(this->window);

    if (!gladLoadGL())
        exit(3);

    printf("OpenGL Version %d.%d loaded", GLVersion.major, GLVersion.minor);

    this->startLoop();
}

OGLWindow::~OGLWindow() {
    glfwDestroyWindow(this->window);
}

void OGLWindow::startLoop() {
    while (!glfwWindowShouldClose(this->window)) {
        // stuff
    }
}
