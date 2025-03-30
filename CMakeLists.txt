cmake_minimum_required(VERSION 3.10)
project(my-opengl-project VERSION 0.1.0)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

add_executable(my-opengl-project 
    src/main.cpp 
    src/glad.h 
    src/glad.c
)

target_link_libraries(my-opengl-project 
    glfw
    OpenGL::GL    
)
# target_link_libraries(my-opengl-project src/glad.h)