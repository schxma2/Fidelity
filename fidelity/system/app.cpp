#include "app.h"

App::App()
{
    m_title = "Fidelity";
}


App::~App()
{
}

void App::Init(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow(m_title);
    glutDisplayFunc(Display);
    glutMainLoop();
}

void App::Display()
{
    // for now this
    glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
	glutSwapBuffers();
	glutPostRedisplay();
}
