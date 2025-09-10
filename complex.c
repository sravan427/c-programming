#include<stdio.h>
void main()
{
    int i,n,m,sum=0;
    printf("enter n,m values:\n");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        printf("%d",i);
        sum=sum+i;
    }
    printf("\nsum=%d\n",sum);
}