#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct dates
    {
        int day;
        int month;
        int year;
    }dates;
    dates d,a;
    d.day=5;
    d.month=10;
    d.year=1999;

    a.day=10;
    a.month=12;
    a.year=2000;

    bool flag=true;
    if(d.day!=a.day) flag=false;
    if(d.month!=a.month) flag=false;
    if(d.year!=a.year) flag=false;

    if(flag==false) printf("unequal ");
    else printf("equal ");
     dates c;
      c=a; // copes the a values
      flag = true; // -> if(a==c) is wrong.
    if(c.day!=a.day) flag=false;
    if(c.month!=a.month) flag=false;
    if(c.year!=a.year) flag=false;

    if(flag==false) printf("unequal ");
    else printf("equal ");
    


    
}