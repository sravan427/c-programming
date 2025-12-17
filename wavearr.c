#include<stdio.h>
int main(){
    int n,m;
    printf("enter n value: ");
    scanf("%d",&n);
    printf("enter m value: ");
    scanf("%d",&m);
    int a[n][m];
    printf("enter :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // for(int i=0;i<n;i++)
    // {   
    //     for(int j=0,k=m-1;j<m/2;j++,k--)
    //     {
    //         if((i+1)%2==0)
    //         {
    //             int temp=a[i][j];
    //             a[i][j]=a[i][k];
    //             a[i][k]=temp;
    //         }
    //     }
    // }
    // printf("\n");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         printf("%2d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    //or
    for(int i=0;i<n;i++){
        if(i%2==0){
        for(int j=0;j<m;j++)
            printf("%2d ",a[i][j]);
        }

        else{
            for(int j=m-1;j>=0;j--)
            {
                printf("%2d ",a[i][j]);
            }
        }
        printf("\n");
    }

        }

