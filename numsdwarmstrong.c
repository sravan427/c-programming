#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    printf("enter n,m values: ");
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++){
        int c=0;
        int a=i;
        while (a>0)
    {
        a=a/10;
        c++;
    }
    a=i;
    int sum=0;
    while (a>0)
    {
      int f=a%10;
        sum+=(int)pow(f,c);
        a/=10; 
    }
   if (sum == i){
    printf("%d ",i);
   }
    }
    return 0;
   
}