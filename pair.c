// #include<stdio.h>
// int main(){
//     int n,a[48],p,c=0;
//     printf("how many do you want numbers: ");
//     scanf("%d",&n);
//     printf("enter: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("enter a number to find pairs: ");
//     scanf("%d",&p);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//            if(a[i]+a[j]==p){
//             printf("pairs=(%d,%d) ",a[i],a[j]);
//             c++;
//            } 
//         } 
//     }
//     printf("\ncount= %d",c);
//     return 0;
// }
#include<stdio.h>
int main(){
    int n,a[48],p,c=0;
    printf("how many do you want numbers: ");
    scanf("%d",&n);
    printf("enter: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a number to find pairs: ");
    scanf("%d",&p);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          for(int k=j+1;k<n;k++)
          {
                if(a[i]+a[j]+a[k]==p){
                printf("(%d,%d,%d) ",a[i],a[j],a[k]);
                c++;
            }
                
          }
           }
        } 
    printf("\ncount= %d",c);
    return 0;
}