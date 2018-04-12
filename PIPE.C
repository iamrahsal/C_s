#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    line(50,400,600,400);
    //up
	
    line(200,200,200,400);
    line(210,210,210,400);
    //horiz
    
	line(200,200,310,200);
    line(210,210,290,210);
    //down
    
	line(310,200,310,220);
    line(290,210,290,220);
 
    line(250,200,250,180);
    line(260,200,260,180);
    rectangle(240,180,270,170);
 
    line(250,300,250,399);
    line(350,300,350,399);
    line(250,399,350,399);
 
    setcolor(WHITE);
    for(i=220;i<=399;i++)
    {
	line(295,i,305,i);
	delay(10);
    }  //tap


    for(i=399;i>300;i--)
    {
	line(251,i,349,i);
	delay(100);
    }      //water


    setcolor(BLACK);
    for(i=220;i<=300;i++)
    {
	line(295,i,305,i);
	delay(10);
    }	//After filling the bucket, the water flow stops 
    
	getch();
}