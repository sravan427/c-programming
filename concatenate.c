#include<stdio.h>
int main(){
    int i=0,j=0;
    char str1[100];
    char str2[100];
    printf("Enter string: ");
    scanf("%s",str1);
    printf("Enter string: ");
    scanf("%s",str2);
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i++]=str2[j++];

    }
    str1[i]='\0';
    printf(" %s",str1);
}

