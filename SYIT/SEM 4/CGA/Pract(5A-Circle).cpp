#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int drawcircle(int x0,int y0,int radius)
{
int x=radius;
int y=0;
int err=0;
while(x>=y)
{
putpixel(x0+x,y0+y,7);
putpixel(x0+y,y0+x,7);
putpixel(x0-y,y0+x,7);
putpixel(x0-x,y0+y,7);
putpixel(x0-x,y0-y,7);
putpixel(x0-y,y0-x,7);
putpixel(x0+y,y0-x,7);
putpixel(x0+x,y0-y,7);
if(err<=0)
{
y+=1;
err+=2*y+1;
}
if(err>=0)
{
x-=1;
err-=2*x+1;
}
}
}
int main()
{
int gd=DETECT,gm,error,x,y,r;
initgraph(&gd,&gm,"C:\\TC\\BGI");
printf("ENTER THE RADIUS OF CIRCLE:");
scanf("%d",&r);
printf("enter coordinate x and y");

scanf("%d%d",&x,&y);
drawcircle(x,y,r);
getch();
closegraph();

return 0;
}

