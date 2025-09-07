#include<stdio.h>
float area(int r);
int main()
{
    int r;
    printf("enter r value\n");
    scanf("%d",&r);
    area(r);    
}
float area(int r)
{
    float area;
    area=3.14*r*r;
    printf("r=%d,area=%f",r,area);
}