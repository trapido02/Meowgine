#include "Window.h"

Window::Window(const char* title, int width, int height)
{    
    if (!glfwInit())
        return;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    m_Window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!m_Window)
    {
        glfwTerminate();
        return;
    }
    
    glfwMakeContextCurrent(m_Window);
    
    while (!glfwWindowShouldClose(m_Window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(m_Window);
        glfwPollEvents();
    }
    
    glfwTerminate();
}

Window::~Window()
{
    glfwTerminate();
}