#include<stdio.h>
int main()
{
    int i,n,a;
    printf("enter n value:\n");
    scanf("%d",&n);
    a=100;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a-3;
    }
}