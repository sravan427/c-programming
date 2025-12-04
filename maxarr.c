// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n[4]={1,2,3,4};
//     int max=n[0];
//     for(int k=0;k<4;k++)
//     {
//         if(max<n[k]) max=n[k];
        
//     }
//     printf("%d",max);
//     return 0;
// }
#include<stdio.h>
#include<limits.h>
int main()
{
    int n[4]={21,10,3,40};
    int min=n[0];
    for(int k=0;k<4;k++)
    {
        if(n[k]<min) min=n[k];
        
    }
    printf("%d",min);
    return 0;
}