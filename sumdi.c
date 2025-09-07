#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        sum=sum+i;
        printf("sum=%d\n",sum);
}