#include<stdio.h>
int main()
{
    char str[]="sravan rasa";
    char *ptr=str; //ptr now points to str[0].It will stores the starting value.starting value means the starting address of str. 
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",*ptr);
        ptr++;
        i++;

    }
}