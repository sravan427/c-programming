#include<stdio.h>
int main()
{
    int i,j,n,m,k;
    int m1[10][10],m2[10][10],m3[10][10];
    printf("\nEnter order of n:\n");
    scanf("%d",&n);
    printf("\nEnter order of m:\n");
    scanf("%d",&m);
    printf("\n%dx%d is your matrix\n",n,m);
    if(n==m)
    {
        printf("\nEnter the values of first  matrix:\n");
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
    printf("\nFirst matrix:\n");
    for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                printf("%2d ",m1[i][j]);
            }
            printf("\n");
        }
    printf("\nEnter the values of second matrix:\n");
    for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
    printf("\nSecond matrix:\n");
    for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                printf("%2d ",m2[i][j]);
            }
            printf("\n");
        }
     for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                m3[i][j]=0;
            }
        }
    for(k=0;k<=n-1;k++)
    {
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                m3[i][j]+=(m1[k][j]*m2[i][k]);
            }
            
        }
    }
    printf("\nProduct of matrix:\n");
    for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                printf("%2d ",m3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix multiplication is only supported for same order (nxm) in this program.\n");
    }

}
