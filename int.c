#include<stdio.h>
int main()
{
    int i,a;
    a=4;
    for(i=1;i<=10;i=i+3)
    {
        printf("%d ",a);
        a=a+i;
    }
}