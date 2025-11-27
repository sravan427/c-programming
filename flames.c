#include <stdio.h>
#include <string.h>
int main()
{
 char n1[100],n2[100];
 int c1=0;
 printf("enter name 1: ");
 scanf("%s",n1);
 printf("enter name 2: ");
 scanf("%s",n2);
 
 // to remove common letters
 for(int i=0;n1[i]!='\0';i++)
 {
    if(n1[i]!=' ')
    {
      for(int j=0;n2[j]!='\0';j++)
      {
        if(n1[i]==n2[j])
        {
         n1[i]=' ';
         n2[j]=' ';
        }
       }
    }
 }
 // to count the digits
 for(int i=0;n1[i]!='\0';i++)
 {
 if(n2[i]!=' ')
 {
 c1++;
 }
 }
 
// to count the digits
 for(int i=0;n2[i]!='\0';i++)
 {
 if(n2[i]!=' ')
 {
 c1++;
 }
 }
 printf("%s\n",n1);
  printf("%s\n",n2);
 printf("%d",c1);
 
return 0;
}
