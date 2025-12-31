#include<stdio.h>
#include<string.h>
int main(){
    int c=0,k=0;
    char str[48];
    puts("Enter a string :");
    scanf("%[^\n]",str);
    while(str[k]!='\0'){
        c++;
        k++;
    }
    for(int i=0,j=c-1;i<c/2;i++,j--){
        char swap=str[i];
        str[i]=str[j];
        str[j]=swap;
    }
    puts("The reverse string is: ");
    puts(str);
    return 0;
}