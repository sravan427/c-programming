#include<stdio.h>
int main()
{
    int a=40,c,d;
    printf("Enter distance (km): ");
    scanf("%d",&c);
    d=a+12*(c-3);
    printf("\nTotal Fare (Rs.)= %d",d);
    if(c==2||c==1)
    {
        printf("not applicable for those km");
    }
    return 0;
}