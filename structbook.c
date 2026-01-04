#include<stdio.h>
typedef struct book
{
    char bname[25];
    char bauthor[25];
    int cellno;
}book;
void display(book* s);
int main(){
    book b={"sravan","john",657};
    display(&b);
    return 0;
}
void display(book* s){
    printf("%s %s %d",s->bname,s->bauthor,s->cellno);
    return;
}
