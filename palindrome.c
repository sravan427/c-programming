#include<stdio.h>
int main()
{
    int n,p=0;
    printf("enter n value : ");
    scanf("%d",&n);
    int a[n];
    printf("enter : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    for(int i=0;i<n/2;i++)
    {
       if(a[n-1-i]!=a[i])
       {
        p=1;
        break;
       }
    }
    if(p==0)
    printf("The given array is a palindrome\n");
    else
    printf("The given array is not a palindrome\n");

return 0;
}