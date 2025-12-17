#include<stdio.h>
int main(){
    int n,temp;
    printf("enter n value: ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter :");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {   // swaps the a[i][j] and a[j][i]. why we are taken j=i why not j=0 ?.Because it will swaps the a[i][j] and a[j][i] for twice .becaues of keeping j=i it runings form  0-->0,next 0-->1,0-->2 (upper trianglar matrix). 
        //we can also use for(int j=0;j<=i;j++)
        for(int j=i;j<n;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%2d",a[i][j]);
        }
        printf("\n");
    }
}