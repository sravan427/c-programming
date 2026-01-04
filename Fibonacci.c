#include<stdio.h>
int main()
{
    long int a=0,b=1,c=0,n;
    printf("enter n value: ");
    scanf("%d",&n);
    c=a+b;
    printf("%ld %ld ",a,b);
    for(int i=3;i<=n;i++)
    {
        printf("%ld ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
/*
#include<stdio.h>
int main(){
int t1=0,t2=1,t3,n,i;
printf("Enter number of terms: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("%d\t",fibo(i));
}
int fibo(int n)
{
if(n==0||n==1)
return n;
else
return (fibo(n-1)+fibo(n-2));
}
}
*/