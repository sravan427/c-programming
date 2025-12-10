#include<stdio.h>
int main()
{
    long int a,b,c=1,n,i;
    printf("enter n,a value: ");
    scanf("%ld %ld",&n,&a);
    for(int i=1;i<=a;i++)
    {
       c*=n;
    }
    printf("%ld",c);

    return 0;
}
