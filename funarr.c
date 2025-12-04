/*#include<stdio.h>
void fun(int x[])
{
    x[0]=19;
    return;
} 
int main()
{
    int a[1]={32};
    printf("%d\n",a[0]);
    fun(a);
    printf("%d",a[0]);
    return 0;
}*/
#include<stdio.h>
void fun(int x[])
{
    int temp;
    temp=x[0]; //swapping of a number.
    x[0]=x[1];
    x[1]=temp; 
    return;
} 
int main()
{
    int a[2]={32,67};
    printf("%d %d\n",a[0],a[1]);
    fun(a);
    printf("%d %d",a[0],a[1]);
    return 0;
}

