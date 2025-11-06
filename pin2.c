#include <stdio.h>
void main()
{
    int a,b,c,j=1234;
    printf("enter pin: ");
    scanf("%d",&a);
    printf("enter pin: ");
    scanf("%d",&b);
    printf("enter pin: ");
    scanf("%d",&c);
    (a==j||b==j||c==j)?printf("corect pin"):printf("account blocked");
}