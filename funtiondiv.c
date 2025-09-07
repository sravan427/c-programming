#include<stdio.h>
float div(int a,int b);
int main()
{
    int x,y;
    float result;
    printf("enter x,y values\n ");
    scanf("%d%d",&x,&y);
    result=div(x,y);
    printf("x=%d,y=%d,result=%.2f",x,y,result);
}    
    float div(int a,int b)
{
    float g;
    g=a/b;
    return g;
}

