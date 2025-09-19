#include<stdio.h>
int main()
{
    int i,n,m,sum=0; 
    printf("enter n,m values:\n");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
        {
            printf("\ni=%d",i);
            printf("\ni^2=%d\n",i*i);
            sum=sum+i;
        }
    printf("\nsum=%d",sum);
}