#include <iostream>
#include <GLFW/glfw3.h>

int main() 
{
    GLFWwindow* window;

   /* Init GLFW */
    if( !glfwInit() )
        exit( EXIT_FAILURE );

    window = glfwCreateWindow( 400, 400, "Boing (classic Amiga demo)", NULL, NULL );
    if (!window)
    {
        printf("Window failed\n");
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
    glfwMakeContextCurrent(window);
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