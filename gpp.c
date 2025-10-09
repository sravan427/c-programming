#include<stdio.h>
int main()
{
    int i,n;
    float a=100;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%.2f ",a);
        a=a/2;
    }
    return 0;
}