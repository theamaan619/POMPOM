#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setcolor(RED);
	circle(100,100,50);
	floodfill(100,100,RED);
	getch();
	closegraph();
	return 0;
}

