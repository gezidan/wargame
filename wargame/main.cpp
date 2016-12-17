#include "engine.h"

void myDisplay(void)
{
	render_clear();
	render_rect(-0.5f, -0.5f, 0.5f, 0.5f);
	render_flush();
}

int main(int argc, char *argv[])
{
	ini_engine(argc, argv, 100, 100, 400, 400, "第一个OpenGL程序", &myDisplay);

	start_engine();

	return 0;
}