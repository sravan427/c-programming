#include<stdio.h>
int main(){
    int a=(1,3,2); // prints the last value in brackets.
    printf("%d",a);
    int var,num;
    num=(var=15,var+35); // checks the condition var=15 store the value as var= 15 the it will checks last value in the brackets var+35=15+35 print the output as 50 thats it.
    printf("\n%d",num);
}