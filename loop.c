#include<stdio.h>
int main()
{
    char ch;
    printf("\nenter any character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nthe given chararcter %c is vowel\n",ch);
        break;
        default:
            printf("\nthe given chararcter %c is consonant\n",ch);
        break;
    }
            

}