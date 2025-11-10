#include<stdio.h>
void main()
{
    int i,j,count=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=count;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        count++;
    }
}