#include<stdio.h>
void main()
{
    int ly;
    printf("enter a year:\n");
    scanf("%d",&ly);
    if(ly%4==0)
        printf("%d was a leap year",ly);
    else
        printf("%d wasn't a leap year",ly);
}