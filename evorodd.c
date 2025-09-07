#include<stdio.h>
void main()
{
    int n;
    printf("enter n value:\n");
    scanf("%d",&n);
    if(n%2==0)
        printf("the given number %d is even",n);
    else
        printf("the given number %d is odd",n);
}