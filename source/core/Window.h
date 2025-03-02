#pragma once

#include <GLFW/glfw3.h>

class Window
{
public:
    Window(const char* title = "Meowgine", int width = 640, int height = 480);
    ~Window();
private:
    GLFWwindow* m_Window;
};