#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a,b,c values:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf(" biggest=%d",a);
            else if(b>c)
                printf("biggest=%d",b);
                    else
                        printf("biggest=%d",c);
}