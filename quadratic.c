#include<stdio.h>
#include<math.h>
int main(){
    double r1,r2,d,a,b,c,re,im;
    printf("enter a,b,c values: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        r1= (-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("root1=%.2lf,root2=%.2lf",r1,r2);
    }
    else if(d==0){
        r1=r2=-b/(2*a);
        printf("r1=r2=%.2lf",r1);
    }
    else{
        re=-b/(2*a);
        im=sqrt(-d)/(2*a);
        printf("root1=%.2lf+%.2lfi,root2=%.2lf-%.2lfi",re,im,re,im);
    }
}
