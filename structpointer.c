#include<stdio.h>
typedef float sravan;
typedef struct person{
    int age;
    sravan weight;
}ifor;
int main(){
    ifor s;
    s.age=18;
    s.weight=50;
    ifor* x=&s;
    printf("%d\n",(*x).age);//x->age
    printf("%.2f",(*x).weight);
    x->age=70;// using pointer we are accesing the structure.
    x->weight=100;
    printf("\n%d",(*x).age);//x->age
    printf("\n%.2f",(*x).weight);
    return 0;
}