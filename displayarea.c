#include<stdio.h>
void display();
int a,b,c,s;
void main()
{
    printf("enter a,b values:\n");
    scanf("%d%d",&a,&b);
    display();
}
void display()
{
    c=a+b;
    s=a*a;
    printf("a=%d,b=%d,c=%d,s=%d",a,b,c,s);
}