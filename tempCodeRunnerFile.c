#include<stdio.h>
int main()
{
    int m,n=1,c=1;
    printf("enter m value:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++,c++)
        {
          printf("%d",c);  
        }
        printf("\n");
        n++;
    }
    return 0;
}