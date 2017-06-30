#pragma once

void create_window(int width, int height, const char* name);
void game_loop(struct GLFWwindow* window);

void register_callbacks(struct GLFWwindow* window);

void framebuffer_size_callback(struct GLFWwindow* window, int width, int height);
