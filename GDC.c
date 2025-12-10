#include<stdio.h>
int main()
{
    long int a,b,c,n,i;
    printf("enter n,a value: ");
    scanf("%ld %ld",&n,&a);
    for(i=1;i<=a && i<=n;i++){
        if(n>a)
        n-=a;
        else if(a>n)
        a-=n;
    }
    printf("gdc=%.2ld",n);
    return 0;
}
