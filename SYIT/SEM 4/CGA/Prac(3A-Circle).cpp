#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
int x,y,radius=80;
initgraph(&gd,&gm,"C:\\TC\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
outtextxy(x-100,50,"Circle Using Graphics in C");
circle(x,y,radius);
getch();
return 0;
closegraph();
}
