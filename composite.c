#include<stdio.h>
void main()
{
    int n,i,a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(n==1)
    printf("1 is neither prime nor composite");
    else if(a==0)
    printf("prime number\n");
    else
    printf("composite number\n");
}