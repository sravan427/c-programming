#include <stdio.h>
void main()
{
    int a,b,c,d;
    a = 10;
    b = 20;
    c = 30;
    d = a++ + b-- + --c;
    printf("\na=%d b=%d c=%d d=%d",a,b,c,d);
}