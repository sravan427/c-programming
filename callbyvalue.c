#include<stdio.h>
float area(int x,int y);
int main()
{
    int b,h;
    float result;
    printf("enter b,h values\n");
    scanf("%d%d",&b,&h);
    result=area(b,h);
    printf("b=%d,h=%d,area=%f",b,h,result);
}
float area(int x, int y)
{
    float d;
    d=0.5*x*y;
    return d;
}




