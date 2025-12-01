/*#include <stdio.h>
#include<string.h>
int main()
{
    int n,len=0;
    char f[20];
    printf("enter n value :");
    scanf("%d",&n);
    printf("enter f value :");
    scanf("%s",f);
    while(n>0)
    {
        n=n/10;
        len++;
    }
    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", f[j]);
        }
        printf("\n");
    }
        printf("\n");
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int n,len=0;
    int f[20];
    printf("enter n value :");
    scanf("%d",&n);
    while(n>0)
    {
        f[len] = n%10;
        n=n/10;
        len++;
    }
    for(int i=len-1;i>=0;i--)
    {
        for(int j=len-1;j>=i;j--)
        {
            printf("%d",f[j]);
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m=1;
        for(j=0;j<i;j=j+1,m++)
        {
            if(i%2==0)
            printf("%c ",65+j);
            else
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter any odd value:");
    scanf("%d",&n);
    d=(n/2)+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==d||i==d) {printf("*");}
            else {printf(" ");}
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter any odd value:");
    scanf("%d",&n);
    d=(n/2)+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==d&&i==d) {printf("*");}
            else {printf("#");}
        }
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter any odd value:");
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {printf("*");}
    for(int i=1;i<=m-2;i++)
    {
        printf("\n*");
        for(int j=1;j<=n;j++)
        {
            if(j==n-1)
            {printf("*");}
            else 
            {printf(" ");}
        }
        
    }
    printf("\n");
    for(int i=1;i<=n;i++)
    {printf("*");}
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int n,m=1;
    printf("Enter any odd number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        {
        if((i==m&&j==m)||(j==(n-m)+1))printf("*");//if(i==j||i+j==n)
        else printf(" ");
    }
    printf("\n");
    m++;
    }

}*/
#include<stdio.h>
int main(){
    int n;
    printf("enter :");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
int main(){
    int n;
    printf("enter :");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0) a=1;
        else a=0;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            if(a==0) a=1;
            else a=0;
        }
        printf("\n");
    }
} // both are same programmes
    #include<stdio.h>
int main(){
    int n;
    printf("enter :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           if((i+j)%2==0) printf("1 ");
           else printf("0 ");
        }
        printf("\n");
    }
}*/



