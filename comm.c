#include<stdio.h>
void main()
{
    int sales;
    float comm;
    printf("enter your sales:\n");
    scanf("%d",&sales);
    if(sales>=5000)
        comm=0.5*sales;
    if(sales<=5000)
        comm=0.2*sales;
    printf("sales=%d,comm=%f",sales,comm);
}
