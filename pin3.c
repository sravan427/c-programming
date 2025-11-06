#include<stdio.h>
int main()
{
    int pin,attempts=1;
    while(attempts<=3)
    {

    
    
        printf("enter pin: ");
        scanf("%d",&pin);
        if(pin==1234)
        {
            printf("corect pin\n");
            return 0;
        }
        else
        {
            printf("incorect pin\n");
        }
        attempts++;
    }
    printf("Access Blocked ! Too many incorrect attempts.\n");
    return 0;

}