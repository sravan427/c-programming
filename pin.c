#include<stdio.h>
int main()
{
    int pin,attempts=1;
    while(attempts<=3)
    {
        printf("Enter PIN: \n");
        scanf("%d",&pin);
        if(pin==1234)
            {
                printf("Access Granted\n");
                return 0;
            }
            else 
            {
                printf("Incorrect pin\n");
            }
            attempts++;



    }
    printf("Access Blocked ! Too many incorrect attempts.\n");
    return 0;

}