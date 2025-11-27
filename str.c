/*#include<stdio.h>
#include<string.h>
void main()
{
    char s[]="sravanrasa@gmail",s2[]=".com";
    if(strchr(s,'@'))
        printf("yes");
    if(strstr(s,s2))
    printf("yess");
}*/
/*#include<stdio.h>
int main()
{
    int m,n=1;
    printf("enter m value:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        for(int j=n;j<=i+(n-1);j++)
        {
          printf("%d",j);  
        }
        printf("\n");
        n++;
    }
    return 0;
}*/
/*#include<stdio.h>
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
}*/
/*#include<stdio.h>
int main()
{
    int m,n=1;
    printf("enter m value:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        for(int j=n;j<=i+(n-1);j++)
        {
            if(i%2==0)
          printf("%d",j);
          else if()  
        }
        printf("\n");
        n++;
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n value:");
    scanf("%d",&n);
    for( i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,j,m=1,k=0;
    printf("enter n value:");
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d",m);
                m++;
            }
            else
            {
                printf("%c",65+k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,j,m=0;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i)-1;j++)
        {
            if(j%2==0)
            continue;
            printf("%d ",j);
        }
        printf("\n");
        m++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,j,m=1;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i)-1;j=j+2)
        {
            printf("%d",j);
        }
        printf("\n");
        m++;
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-1;j=j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,j,m=1;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=1;
        for(j=1;j<=n;j++)
        {
            printf("%d ",m);
            m+=2;
        }
        printf("\n");
    }
    return 0;
}*/

