#include "app.h"
#include "input.h"
App::App()
{
    m_title = "Fidelity";
}

using fidelity::Input::Keyboard;
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
    glutKeyboardFunc(Keyboard);

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
