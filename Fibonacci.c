#include<stdio.h>
int main()
{
    long int a=0,b=1,c=0,n,i;
    printf("enter n value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
    }
}