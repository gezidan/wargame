#include "render.h"
#include <GL/glut.h>

ENGINE_API void render_clear()
{
	glClear(GL_COLOR_BUFFER_BIT);
}

ENGINE_API void render_flush()
{
	glFlush();
}

ENGINE_API void render_rect(float x, float y, float w, float h)
{
	glRectf(x, y, w, h);
}
