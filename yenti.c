// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i;
//     char s1[]="A";
//     char s2[]="B";
//     i=strcmp(s1,s2);
//     if(i==0) 
//     printf("s");
//     else 
//     printf("n");
//     printf("\n%d",i);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i,flag=0;
//     char s1[100];
//     printf("enter string 1: ");
//     gets(s1);
//     char s2[100];
//     printf("enter string 2: ");
//     gets(s2);
//     // i=strcmp(s1,s2);
//     for(i=0;s1[i]!='\0' || s2[i]!='\0';i++){
//         if(s1[i]!=s2[i]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1) 
//     printf("not same");
//     else 
//     printf("same");
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[100];
//     printf("enter string 1: ");
//     gets(str1);
//     int n=strlen(str1);
//     printf("%d\n",n);
//     // printf("%s",strrev(s1));
//     for(int i=0;i<n/2;i++)
//     {
//         int temp=str1[i];
//         str1[i]=str1[n-i-1];
//         str1[n-i-1]=temp;
//     }
//     puts(str1);  
      
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[100];
//     printf("enter string 1: ");
//     gets(str1);
//     for(int i=0;str1[i]!='\0';i++)
//     {
//         if(str1[i]>='A'&& str1[i]<='Z')
//         {
//             str1[i]=str1[i]+32; //strlwr()
//         }
//     }
//     puts(str1);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    printf("enter string 1: ");
    gets(str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='a'&& str1[i]<='z')
        {
            str1[i]=str1[i]-32; //strupr()
        }
    }
    puts(str1);
    return 0;
}