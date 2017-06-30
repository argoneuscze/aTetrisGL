#include "ogl_window.h"

#include <process.h>
#include "glad/glad.h"
#include <cstdio>
#include "GLFW/glfw3.h"

void create_window(int width, int height, const char* name) {
    if (!glfwInit())
        exit(1);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    auto window = glfwCreateWindow(width, height, name, nullptr, nullptr);

    if (!window)
        exit(2);

    glfwMakeContextCurrent(window);

    if (!gladLoadGL())
        exit(3);

    printf("OpenGL Version %d.%d loaded", GLVersion.major, GLVersion.minor);

    register_callbacks(window);
    game_loop(window);

    glfwDestroyWindow(window);
}

static void game_loop(struct GLFWwindow* window) {
    while (!glfwWindowShouldClose(window)) {
        // stuff
    }
}

static void register_callbacks(struct GLFWwindow* window) {
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
}

static void framebuffer_size_callback(struct GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}
