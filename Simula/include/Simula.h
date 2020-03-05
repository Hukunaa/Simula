#pragma once
#include <iostream>
#include <GL/glew.h>
#include <glfw3.h>

class Simulation
{
public:
    Simulation() {};
    ~Simulation() {};

    void BuildTriangle();

    GLuint VertexArrayID;
    GLuint vertexbuffer;
};