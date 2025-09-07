#include<stdio.h>
void display();
int a,b,c;
void main()
{
    printf("enter a,b values\n");
    scanf("%d%d",&a,&b);
    display();
}
void display()
{
    c=a+b;
    printf("a=%d,b=%d,c=%d",a,b,c);
}