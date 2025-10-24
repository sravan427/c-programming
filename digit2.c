#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter n value: ");
    scanf("%d",&n);
    for( ;n!=0;n=n/10)
        count++;
    printf("%d",count); // for( ; ; )
}