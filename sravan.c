#include<stdio.h>
int main()
{
    int n=555,p=12;
    long int l=146359;
    float m=55.555;
    printf("[%d]",n);
    printf("[%10d]",n);
    printf("[%-10d]",n);
    printf("[%010d]",n);
    printf("[%f]",m);
    printf("[%2f]",m);
    printf("[%15.3f]",m);
    printf("[%ld]",l);
    printf("[%*d]",p,n);
    return 0;
}