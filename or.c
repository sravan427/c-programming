#include<stdio.h>
void main()
{
    char ch;
    printf("enter any character\n");
    ch=getche();
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("the given character %c is vowel\n",ch);
    else
        printf("the given character %c is consonant\n",ch);
    
}