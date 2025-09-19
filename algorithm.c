//WAP to print {4,7,10,13,16.......,3n-3}
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n value:\n");
    scanf("%d",&n);
    for(i=4;i<=3*n+1;i=i+3)
    {
        printf("%d ",i);
    }
}
