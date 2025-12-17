#include<stdio.h>
int main(){
    int n,temp;
    printf("enter n value: ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {   
        for(int j=i;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0,k=n-1;j<n/2;j++,k--){
                int temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
}