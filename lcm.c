#include<stdio.h>
int main()
{
    long int a,n,gcd;
    printf("enter n,a value: ");
    scanf("%ld %ld",&n,&a);
    // for(i=1;i<=a && i<=n;i++){
    //     if(n>a)
    //     n-=a;
    //     else if(a>n)
    //     a-=n;
    // }
    for(int i=1;i<=n&&i<=a;i++){
        if(n%i==0&&a%i==0){
            gcd=i;
        }
    }
    int d=(n*a)/gcd;
    printf("lcm=%ld",d);
    return 0;
}
