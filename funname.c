#include<stdio.h>
int sum(int x,int y);
void main()
{
    int a,b,result;
    char ch='i',name[25];
    printf("enter a,b values and any name:\n");
    scanf("%d%d%s",&a,&b,name);
    putchar(ch);
    result=sum(a,b);
    printf("\nch=%c,result=%d,name=%s\n",ch,result,name);
}
int sum(int x,int y)
{
    int c;
    c=x+y;
    return c;
}