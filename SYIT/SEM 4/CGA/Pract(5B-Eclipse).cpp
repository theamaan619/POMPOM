#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	float xc,yc,rx,ry,x,y,pk,p1k,p2k;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("\enter center of ellipse\n");
	scanf("%f %f",&xc,&yc);
	printf("\enter radius of ellipse\n");
	scanf("%f %f",&rx,&ry);
	x=0;y=ry;
	pk=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
	while((2*ry*ry*x)<(2*rx*rx*y))
	{
		if(pk<=0)
		{
			x=x+1;
			p1k=pk+(2*ry*ry*x)+(ry*ry);
		}
		else
		{
			x=x+1;
			y=y-1;
			p1k=pk+(2*ry*ry*x)-(2*rx*rx*y)+(ry*ry);
		}
		pk=p1k;
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+x,yc+y,WHITE);
	}
		line(xc+rx,yc,xc-rx,yc);
		line(xc,yc+ry,xc,yc-ry);
		getch();
		closegraph();
		return 0;
		
}
