#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
clrscr();
int i;
int gdriver = DETECT,gmode;

	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

       //left top right bottom
	{
      {

	
a:

       for(i=0;i<500;i++)
	 {

		line(100+i,10,170+i,10);
		line(70+i,40,100+i,10);
		line(170+i,10,200+i,40);
		line(200+i,40,240+i,40);
		line(240+i,40,240+i,70);
		line(70+i,40,70+i,70);
		line(70+i,70,90+i,70);
		line(130+i,70,160+i,70);
		line(200+i,70,240+i,70);
	circle(110+i,70,15);
	circle(180+i,70,15);
	arc(110+i,70,0,180,20);
	arc(180+i,70,0,180,20);
	line(80+i,40,110+i,40);
	line(100+i,20,80+i,40);
	line(100+i,20,110+i,20);
	line(110+i,20,110+i,40);
	line(120+i,40,190+i,40);
	line(120+i,20,170+i,20);
	line(120+i,20,120+i,40);
	line(170+i,20,190+i,40);
	line(0,85,800,85);
	delay(20);
	cleardevice();
	}
	}


getch();

}
}
//by saket
