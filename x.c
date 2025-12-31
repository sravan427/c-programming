// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter elments : ");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int m;
//     printf("enter size: ");
//     scanf("%d",&m);
//     for(int i=0;i<n;i++)
//     {
//        for(int j=0;j<m;j++) 
//        {
//         printf("%d ", a[(i + j) % n]);
//        }
//        printf("\n");
//     }
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int a;
//     printf("enter :");
//     scanf("%d",&a);
//     int*p=&a;
//     *p=*p+a;
//     printf("%d",a);
//     char s[]="sravan rasa";
//     char*pt=s;
//     printf("\n%s",pt);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main()
{
   char a[]="sravan rasa";
   char*ptr =a;
   //a[]="sravan"; -->incorrect
   printf("%s",ptr);
   char * pt="sravan rasa";
   pt="sravan ";//pt → pointer to char (string) *pt → single character (the first character)
   printf("\n%c",*(pt+2));
   return 0;
}