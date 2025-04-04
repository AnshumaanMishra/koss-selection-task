#include <bits/stdc++.h>
#include "glad.h"
#include <GLFW/glfw3.h>
using namespace std;

int main(){
    GLFWwindow* window;

    if(!glfwInit()){
        return -1;
    }

    window = glfwCreateWindow(640, 480, "Window!", NULL, NULL);
    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        cout << "Couldnt Load OpenGL" << endl;
        glfwTerminate();
        return -1; 
    }

    glClearColor(0.25f, 0.5f, 0.75f, 1.0f);

    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();

        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
    }

    glfwTerminate(); 

    return 0;
}
