#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd,gm; 
detectgraph(&gd, &gm);  
initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");  
setbkcolor(WHITE);  
setcolor(5);  
outtextxy(10,10,"TRAFFIC LIGHT");  
setcolor(BLUE);  
line(350,400,350,500); 
rectangle(300,400,400,100);  
setfillstyle(SOLID_FILL,GREEN);  
circle(350,320,40); 
floodfill(350,320,BLUE);  
setfillstyle(SOLID_FILL,YELLOW);  
circle(350,210,40);  
floodfill(350,210,BLUE);  
setfillstyle(SOLID_FILL,RED);  
circle(350,100,40);  
floodfill(350,100,BLUE);  
return 0;  
}