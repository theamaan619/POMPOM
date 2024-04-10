#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(100,100,150);
	setcolor(RED);
	circle(200,200,50);
	getch();
	closegraph();
	return 0;
}
