// #include<stdio.h>
// int main(){
//     int n,key,a[48],f=0;
//     printf("enter how many no. do you want: \n");
//     scanf("%d",&n);
//     printf("enter no.'s: \n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\nenter a number to search: ");
//     scanf("%d",&key);
//     for(int i=0;i<n;i++){
//         if(a[i]==key){
//             printf("a[%d]",i);
//             f=1; }    
//     }
//     if(f==0)
//     printf("\n not found");
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n,a[48];
    printf("enter no.'s do you want :");
    scanf("%d",&n);
    printf("enter values: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b=a[0];
    for(int i=0;i<n;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        }
    }
    printf("\n max=%d",b);
    return 0;
}
