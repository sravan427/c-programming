#include<stdio.h>
typedef float sravan;//sravan becomes an alias for float
typedef int* pointer;// pointer becomes an alias for int* ,alias:-used to indicate that a named person is also known or more familiar under another specified name.
int main()
{
    sravan y=10; // we are modified float as sravan .
    printf("%f",y);
    int x=7,z=11;
    //int* a=&x,b=&z; // -> It int* a and int b but not int* a and int *b, to overcome it the typedef are used.
    pointer a=&x,b=&z; // because of it we are directly initalizing the pointer
    printf("\n%p \n%p",(void*)a,(void *)b);//%p → always use (void*).Casting avoids warnings and follows the C standard.
    return 0;
}