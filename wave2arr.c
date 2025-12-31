#include<stdio.h>
int main(){
    int n,temp;
    printf("enter n value: ");
    scanf("%d",&n);
    printf("enter :\n");
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0,k=n-1;j<n/2;j++,k--)
        {
            if(i%2==0)
            {
                temp=a[j][i];
               a[j][i]=a[k][i];
                a[k][i]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);  // or a[i][j] if you want print i matrix form
        }
        printf(" ");
    }

}