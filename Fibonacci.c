#include<stdio.h>
int main()
{
    long int a=0,b=1,c=0,n;
    printf("enter n value: ");
    scanf("%d",&n);
    c=a+b;
    printf("%ld %ld ",a,b);
    for(int i=3;i<=n;i++)
    {
        printf("%ld ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
