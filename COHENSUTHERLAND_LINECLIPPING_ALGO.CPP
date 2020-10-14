//COHEN SUTHERLAND LINE CLIPPING ALGORITHM
/*
The Cohen–Sutherland algorithm is a computer-graphics algorithm used for line clipping. The algorithm divides a two-dimensional space into 9 regions and 
then efficiently determines the lines and portions of lines that are visible in the central region of interest (the viewport).

In the algorithm, first of all, it is detected whether line lies inside the screen or it is outside the screen. All lines come under any one of the following categories:

Visible
Not Visible
Clipping Case
1. Visible: If a line lies within the window, i.e., both endpoints of the line lies within the window. A line is visible and will be displayed as it is.
2. Not Visible: If a line lies outside the window it will be invisible and rejected. Such lines will not display. If any one of the following inequalities is satisfied, then the line is considered invisible. Let A (x1,y2) and B (x2,y2) are endpoints of line.
xmin,xmax are coordinates of the window.
ymin,ymax are also coordinates of the window.
          x1>xmax
          x2>xmax
          y1>ymax
          y2>ymax
          x1<xmin
          x2<xmin
          y1<ymin
          y2<ymin

3. Clipping Case: If the line is neither visible case nor invisible case. It is considered to be clipped case. First of all, the category of a line is found based on nine regions given below. All nine regions are assigned codes. Each code is of 4 bits. If both endpoints of the line have end bits zero, then the line is considered to be visible.


*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	int i,xmax,ymax,xmin,ymin,x11,y11,x22,y22,m;
	int a[4],b[4],c[4],x1,y1;
	clrscr();
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	printf("\nENTER BOTTOM LEFT CO-ORDINATE OF VIEWPORT: ");
	scanf("%d %d",&xmin,&ymin);
	printf("\ENTER TOP RIGHT CO-ORDINATE OF VIEWPORT: ");
	scanf("%d %d",&xmax,&ymax);
	rectangle(xmin,ymin,xmax,ymax);
	printf("\nENTER CO-RDINATE OF FIRST POINT OF LINE: ");
	scanf("%d %d",&x11,&y11);
	printf("\nENTER CO-ORDINATE OF SECOND POINT OF LINE: ");
	scanf("%d %d",&x22,&y22);
	line(x11,y11,x22,y22);
	delay (500);
	for(i=0;i<4;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	m=(y22-y11)/(x22-x11);
	if(x11<xmin)
		a[3]=1;
	if(x11>xmax)
		a[2]=1;
	if(y11<ymin)
		a[1]=1;
	if(y11>ymax)
		a[0]=1;
	if(x22<xmin)
		b[3]=1;
	if(x22>xmax)
		b[2]=1;
	if(y22<ymin)
		b[1]=1;
	if(y22>ymax)
		b[0]=1;
	printf("\nREGION CODE OF FIRST POINT: ");
	for(i=0;i<4;i++)
		printf("%d",a[i]);
	printf("\nREGION CODE OF SECOND POINT: ");
	for(i=0;i<4;i++)
		printf("%d",b[i]);
	printf("\nANDING: ");
	for(i=0;i<4;i++)
		c[i]=a[i]&&b[i];
	for(i=0;i<4;i++)
		printf("%d",c[i]);
	getch();
	if(c[0]==0&&c[1]==0&&c[2]==0&&c[3]==0)
	{
		if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0
			&&b[0]==0&&b[1]==0&&b[2]==0&&b[3]==0)
		{
			clrscr();
			clearviewport();
			printf("\nTHE LINE IS TOTALLY VISIBLE AND NO CLIPPING IS REQUIRED ");
			rectangle(xmin,ymin,xmax,ymax);
			line(x11,y11,x22,y22);
			getch();
		}

		else
		{
		clrscr();
		clearviewport();
		printf("\nLINE IS PARTIALLY VISIBLE ");
		rectangle(xmin,ymin,xmax,ymax);
		line(x11,y11,x22,y22);
		getch();
		if(a[0]==0&&a[1]==1)
		{
			x1=x11+(ymin-y11)/m;
			x11=x1;
			y11=ymin;
		}
		else if(b[0]==0&&b[1]==1)
		{
			x1=x22+(ymin-y22)/m;
			x22=x1;
			y22=ymin;
		}
		if(a[0]==1&&a[1]==0)
		{
			x1=x11+(ymax-y11)/m;
			x11=x1;
			y11=ymax;
		}
		else if(b[0]==1&&b[1]==0)
		{
			x1=x22+(ymax-y22)/m;
			x22=x1;
			y22=ymax;
		}
		if(a[2]==0&&a[3]==1)
		{
			y1=y11+m*(xmin-x11);
			y11=y1;
			x11=xmin;
		}
		else if(b[2]==0&&b[3]==1)
		{
			y1=y22+m*(xmin-x22);
			y22=y1;
			x22=xmin;
		}
		if(a[2]==1&&a[3]==0)
		{
			y1=y11+m*(xmax-x11);
			y11=y1;
			x11=xmax;
		}
		else if(b[2]==1&&b[3]==0)
		{
			y1=y22+m*(xmax-x22);
			y22=y1;
			x22=xmax;
		}
		clrscr();
		clearviewport();
		printf("\nAFTER CLIPPING: ");
		rectangle(xmin,ymin,xmax,ymax);
		line(x11,y11,x22,y22);
		getch();
	}
	}
	else
	{
		clrscr();
		clearviewport();
		printf("\nLINE IS INVISIBLE: ");
		rectangle(xmin,ymin,xmax,ymax);
		getch();
	}
	closegraph();
	getch();
}








