#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enter n value: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
}