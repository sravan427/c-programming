#include<stdio.h>
int main(){
    int k,r;
    printf("Enter how many numbers do you want: ");
    scanf("%d",&k);
    int a[k];
    printf("\nEnter %d numbers : ",k);
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<k/2;i++){
        int temp=a[i];
        a[i]=a[k-1-i];
        a[k-1-i]=temp;
    }
    printf("enter to rotate of array the number: ");
    scanf("%d",&r);
    if(r>k){
        r=k%r;
        int d=k-r;
        for(int i=0;i<r/2;i++)
        {
            int c;
            c=a[i];
            a[i]=a[r-1-i];
            a[r-1-i]=c;
        }
            for(int j=0;j<d/2;j++)
            {
                int l;
                l=a[r];
                a[r]=a[k-1-j];
                a[k-1-j]=l;
            }
    
}
if(r<k){
        int t=k-r;
        for(int i=0;i<r/2;i++){
            int c;
            c=a[i];
            a[i]=a[r-1-i];
            a[r-1-i]=c;
        }
            for(int j=0;j<t/2;j++)
            {
                int l;
                l=a[r];
                a[r]=a[k-1-j];
                a[k-1-j]=l;
            }
    
}
else if(r==k){
     for(int i=0;i<k/2;i++){
        int temp=a[i];
        a[i]=a[k-1-i];
        a[k-1-i]=temp;
    }
}
    printf("The rotated array is: "); 
for(int i=0;i<k;i++){
        printf("%d ",a[i]);
    }
return 0;
}