#include<stdio.h>
sub();
int main()
{
    sub();
}
sub()
{
    int a,b,sub;
    printf("enter a,b values\n");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("a=%d,b=%d,sub=%d",a,b,sub);
}
