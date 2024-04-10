#include<graphics.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	outtext("press any key to clear screen");
	getch();
	cleardevice();
	outtext("press any key to exit");
	getch();
	closegraph();
	return 0;
}
