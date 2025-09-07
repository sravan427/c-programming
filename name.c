#include<stdio.h>
void main()
{
    int a,b,c;
    char name[25];
    printf("\nenter a,b,name value:\n");
    scanf("%d%d%s",&a,&b,name);
    c=a*b;
    printf("c=%d,name=%s",c,name);
}
