#include<stdio.h>
int main()
{
    int choice;
    printf("enter the value:\n");
    scanf("%d",&choice);
    if(choice==1)
        printf("the given %d=I",choice);
            else
            {     
                if(choice==5)
                    printf("the given %d=V",choice);
                        else
                            {
                                if(choice==10)
                                    printf("the given %d=X",choice);
                                        else
                                            {
                                                if(choice==50)
                                                    printf("the given %d=L",choice);
                                                        else
                                                            {
                                                                if(choice==100)
                                                                    printf("the given %d=C",choice);
                                                                        else
                                                                            {
                                                                                if(choice==500)
                                                                                    printf("the given %d=D",choice);
                                                                                        else
                                                                                            {
                                                                                                if(choice==1000)
                                                                                                    printf("the given %d=M",choice);
                                                                                                        else
                                                                                                            printf("something went wrong please try again",choice);
                                                                                            }
                                                                            }
                                                            }
                                            }
                            }
            }
}
                                                                                            
                                                
                                    



