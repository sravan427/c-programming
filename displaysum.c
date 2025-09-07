#include<stdio.h>
void display();
int a=10;
void main()
{
    printf("a=%d",a);
    display();
}
void display()
{
    int b=20;
    printf("\nb=%d",b);
}
