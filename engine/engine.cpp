#include "engine.h"
#include <GL/glut.h>

ENGINE_API void ini_engine(int argc, char *argv[], int x, int y, int w, int h, std::string name, DisplayFunc func)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

	glutInitWindowPosition(x, y);

	glutInitWindowSize(w, h);

	glutCreateWindow(name.c_str());

	glutDisplayFunc(func);

	glutMainLoop();
}

ENGINE_API void start_engine()
{
	glutMainLoop();
}
