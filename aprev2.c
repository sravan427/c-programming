#include<stdio.h>
int main()
{
    int a,i;
    a=100;
    for(i=1;a>0;i++)
    {
        printf("%d ",a);
        a=a-6;
    }
    return 0;
}