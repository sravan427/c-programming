// #include<stdio.h>
// void evensum();
// int main(){
//     evensum();
//      return 0;
// }
// void evensum(){
//     int a,sum=0;
//     printf("enter a value: ");
//     scanf("%d",&a);
//     for(int i=0;i<=10;i++){
//         if(a%2==0){
//             sum+=i;
//         }
//     }
        
// }
#include<stdio.h>
void evensum();   // function declaration
int main(){
    evensum();    // function call
    return 0;
}
void evensum(){   // function definition
    int a, sum = 0;
    printf("Enter a value: ");
    scanf("%d", &a);
    for(int i = 0; i <= a; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    printf("Sum of even numbers = %d\n", sum);
}
