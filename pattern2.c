/*#include<stdio.h>
int main()
{
    int n,m=1;
    printf("enter n m values: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%d ",j);    
        }
        printf("\n");
        m++;
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int m;
    printf("enter m values: ");
    scanf("%d",&m);
    for(int i=m;i>=m;i--)
    {
        for(int j=m;j>=1;j--)
        {
            printf("%d ",j);   
        }
        m--;
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter n values: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);   
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,m;
    printf("enter n,m values: ");
    scanf("%d %d",&n,&m);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,m=1,c=1;
    printf("enter n values: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++,c++)
        {
            printf("%d ",c);
        }
        printf("\n");
        m++;
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main() {
    char n[20];
    printf("enter any number: ");
    scanf("%s", n);

    int len = strlen(n);

    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", n[j]);
        }
        printf("\n");
    }

    return 0;
}
/*#include<stdio.h>
int main()
{
    int n,m=1;
    printf("enter n values: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           if(j%2==0)
           printf("0");
           else
           printf("1");
        }
        printf("\n");
        m++;
    }
        return 0;
}
        */

