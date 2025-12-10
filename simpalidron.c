#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter: ");
    scanf("%d",&a);
    int m=a;
    while(a>0){
        b=a%10;
        c=(c*10)+b;
        a=a/10;
    }
    if(c==m)
        printf("given number %d is a palidrome %d",c,m);
    else printf("given number not is a palidrome");
}
