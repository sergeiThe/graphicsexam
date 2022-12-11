#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main()
{
    GLFWwindow *window;

    /* Init GLFW */
    if (!glfwInit())
        exit(EXIT_FAILURE);

    window = glfwCreateWindow(800, 600, "Boing (classic Amiga demo)", NULL, NULL);
    if (!window)
    {
        printf("Window failed\n");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    for (;;)
    {
        /* Swap buffers */
        glfwSwapBuffers(window);
        glfwPollEvents();

        /* Check if we are still running */
        if (glfwWindowShouldClose(window))
            break;
    }
    glfwTerminate();
    std::cout << "Hello\n";
    return 0;
}