#include "ogl_window.h"

#include <process.h>
#include "glad/glad.h"
#include <cstdio>

OGLWindow::OGLWindow(int width, int height, std::string name) {
    if (!glfwInit())
        exit(1);

    this->window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
    glfwMakeContextCurrent(this->window);

    if (!gladLoadGL())
        exit(2);

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
