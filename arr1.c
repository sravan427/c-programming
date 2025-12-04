#include<stdio.h>
int main(){
    int n,key,a[48],f=0;
    printf("enter how many no. do you want: \n");
    scanf("%d",&n);
    printf("enter no.'s: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter a number to search: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("a[%d]",i);
            f=1; }    
    }
    if(f==0)
    printf("\n not found");
    return 0;

}