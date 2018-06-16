#include "climatechange.h"

#define GLEW_STATIC
#include <GL/glew.h>
#include <GLFW/glfw3.h>

GLFWwindow* window;

GLuint globeShaderProgram;

GLint globe_windowXUniform;
GLint globe_windowYUniform;
GLint globe_viewUniform;
GLint globe_projectionUniform;

unsigned int globe_VBO;
unsigned int globe_VAO;

void generateShaders();
