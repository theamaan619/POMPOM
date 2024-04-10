 #include<graphics.h>
 #include<stdlib.h>
 #include<stdio.h>
 #include<conio.h>
 int main(void)
{
	int gdriver=DETECT,gmode;
	int xmax,ymax;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	outtextxy(190,20,"Ahmed Shaikh 232");
	setcolor(getmaxcolor());
	xmax = getmaxx();
	ymax = getmaxy();
	line(xmax/2,0,xmax/2,ymax);
	line(0,ymax/2,xmax,ymax/2);
	getch();
	closegraph();
	return 0;
}
