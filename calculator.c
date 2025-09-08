#include<stdio.h>
void main()
{
    int choice,a,b;
    printf("\n***CALCULATOR PROGRAM***\n");
    printf("\n1.add\n2.sub\n3.mult\n4.divi\nenter your choice:\n");
    scanf("%d",&choice);
    printf("enter a,b values:\n");
    scanf("%d%d",&a,&b);
    if(choice==1)
        printf("\n sum=%d\n",a+b);
    else if(choice==2)
        printf("\n sub=%d\n",a-b);
    else if(choice==3)
        printf("\n multi=%d\n",a*b);
    else if(choice==4)
        printf("\n divi=%d\n",a/b);
        else
            printf("\nwrong choice\n");
}