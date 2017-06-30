cmake_minimum_required (VERSION 2.8.11)
project (atetrisgl)

add_subdirectory(libs/glfw)
include_directories(libs/glad/include)

add_subdirectory(src)
