#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
int graphdriver=DETECT,graphicmode;
initgraph(&graphdriver,&graphicmode,"C:\\TC\\BGI");
int x1,y1,x2,y2,x,y,x3,y3,x4,y4;
printf("Enter the 2 lines end points:") ;
printf("x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

line(x1,y1,x2,y2) ;
printf("enter the scaling co-ordinates:");
scanf("%d%d",&x,&y);
x3=x1*x;
y3=y1*y;
//x4=x2*x;
//y4=y2*y;
printf("Line after scaling");
line(x1,y1,x4,y4) ;
getch();
closegraph();
return 0;
}

