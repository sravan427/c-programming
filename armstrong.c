#include<stdio.h>
#include<math.h>
int main(){
    int a,le=0,sum=0,re;//#include<stdbool.h> bool flag=true; bool is a data type
    printf("enter :");
    scanf("%d",&a);
    int m=a;
    int temp=a;
    while(temp>0){
        temp/=10;
        le++;
    }
   for(int i=1;i<=le;i++)
   {
        re=m%10;
        sum+=(int)pow(re,le);
        m=m/10;
   } 
   printf("%d",sum);
   if (sum == a)
        printf("\n%d is an Armstrong number\n", a);
    else
        printf("\n%d is not an Armstrong number\n", a);
    return 0;   
}