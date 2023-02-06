
#include <graphics.h>


int main()
{

	int gd = DETECT, gm;


	initgraph(&gd, &gm, "");


	rectangle(250, 200, 50,50);

	getch();
	closegraph();

	return 0;
}
