#include<stdio.h>
int main()
{
    int monthnum;
    printf("enter the month number: ");
    scanf("%d", &monthnum);
    switch(monthnum)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("it has 1 to 31 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("it has 1 to 30 days");
            break;
        case 2:
            printf(" it has 1 to 28 (or) 29");
            break;
        default:
            printf("enter 1 to 12 number only");
            break;
    }
 return 0;
}