// #include<stdio.h>
// void reverse(int a[])
// {
//     int i=0,j=5;
//     while(i<j)//for(int i=0,j=5;i<j;i++,j--)
//     {
//         int temp=a[i];
//         a[i]=a[j];
//         a[j]=temp;
//         i++;
//         j--;
//     }
//     return;
    
// }
// int main()
// {
//     int a[6]={1,2,3,4,4,5};
//     reverse (a);
//     for(int i=0;i<6;i++)
//     {
//     printf("%d ",a[i]);
//     }
//    return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    printf("enter n value : ");
    scanf("%d",&n);
    int a[n];
    printf("enter : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    for(int i=0;i<n/2;i++)//for(int i=0,j=n;i<=j;i++,j--){int temp=a[i]; a[i]=a[j]; a[j]=temp;}
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-i-1]=temp;
    }for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;
}
