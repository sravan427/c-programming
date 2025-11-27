#include <stdio.h>
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
}
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