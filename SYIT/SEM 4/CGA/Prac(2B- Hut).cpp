#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
 int gd,gm;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

 rectangle(200,200,400,350);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(201,201,WHITE);
 line(200,200,300,100);
 line(400,200,300,100);
 setfillstyle(SOLID_FILL,RED);
 floodfill(300,150,WHITE);
 line(300,100,480,100);
 line(480,100,600,200);
 line(400,200,600,200);
 setfillstyle(SOLID_FILL,RED);
 floodfill(400,180,WHITE);
 rectangle(400,200,600,350);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(401,201,WHITE);
 rectangle(480,250,530,350);
 setfillstyle(SOLID_FILL,BROWN);
 floodfill(481,251,WHITE);
 rectangle(280,250,330,300);
 setfillstyle(SOLID_FILL,BROWN);
 floodfill(281,251,WHITE);

 getch();
 closegraph();
 return 0;
}


