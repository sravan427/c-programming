#include<stdio.h>
int fact(int a);
void main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
   int l=fact(n);
   printf("%d",l);
   return 0;
}
int fact(int a)
    {
    //     int c=1;
    //     for(int i=1;i<=a;i++){
    //         c*=i;
    //     }
    //     return c;
    if(a>1) //recursion funtion 
        return x*fact(x-1);
        else
        return 1;
    
    }