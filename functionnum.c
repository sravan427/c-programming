#include<stdio.h>
int sum(int x,int y); 
int main()
{
    int a,b,result;
    printf("enter a,b values\n");
    scanf("%d%d",&a,&b);
    result=sum(a,b);
    printf("a=%d,b=%d,result=%d",a,b,result);
}
int sum(int x,int y)
{
    int e;
    e=x+y;
    return e;
}   
