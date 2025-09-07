#include<stdio.h>
sum();
int main()
{
    sum();
}
sum()
{
    int a,b,sum;
    printf("enter a,b values\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\n a=%d,b=%d,sum=%d",a,b,sum);
}