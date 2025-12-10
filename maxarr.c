// maximum
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n[4]={1,2,3,4};
//     int max=n[0];//or INT_MIX it will stores the minimum value;or INT_MAX stores the maximum value;
//     for(int k=0;k<4;k++)
//     {
//         if(max<n[k]) max=n[k];
        
//     }
//     printf("%d",max);
//     return 0;
// }
// minimum program
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n[4]={21,10,3,40};
//     int min=n[0];
//     for(int k=0;k<4;k++)
//     {
//         if(n[k]<min) 
//         min=n[k];
        
//     }
//     printf("%d",min);
//     return 0;
// }
//second max value it not works proper in case of descending order
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n[4]={5,4,3,2};
//     int max=INT_MIN,smax;//max will stores minimum value .we can instead of INT_MIN like int max=n[0] it will takes the starting value from the given array
//     for(int k=0;k<4;k++)
//     {
//         if(max<n[k])
//         {
//         smax=max;//smax is now previous max
//         max=n[k];// max is now a new max
//         }   
//     }
//     printf("smax=%d, max=%d",smax,max);
//     return 0;
// }
// to over come it there is a solution
#include<stdio.h>
#include<limits.h>
int main()
{
    int n[7]={5,4,8,7,88,3,2};
    int max=INT_MIN,smax;
    for(int k=0;k<7;k++)
    {
        if(max<n[k])
        {
        smax=max;
        max=n[k];
        }  
        else if(smax<n[k]&&smax!=max) 
        {
            smax=n[k];
        }
    }
    printf("smax=%d, max=%d",smax,max);
    return 0;
} 
