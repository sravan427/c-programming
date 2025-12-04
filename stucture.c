#include<stdio.h>
#include<string.h>
struct marks
{
    int m[10],s;
}; 
int main()
{
    struct marks r;
    printf("enter marks of a student: ");
    r.s=0;
    for(int i=0;i<10;i++){
        scanf("%d",&r.m[i]);}
        for(int i=0;i<10;i++)
        {
            r.s+=r.m[i];
        }
        printf("%d",r.s);
        return 0;
}


