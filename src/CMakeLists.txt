set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

set(GLAD_SRC ${PROJECT_SOURCE_DIR}/libs/glad/src/glad.c)

set(SRC_LIST main.cpp ogl_window.cpp input.cpp)

add_executable(atetrisgl ${SRC_LIST} ${GLAD_SRC})

target_link_libraries(atetrisgl glfw)
