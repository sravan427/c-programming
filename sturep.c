#include<stdio.h>
void main()
{
    char name[25];
    int rno,m1,m2,tot;
    float avg;
    char res;
    printf("enter name:\n");
    gets(name);
    printf("\n enter rno,m1,m2\n");
    scanf("%d%d%d",&rno,&m1,&m2);
    tot=m1+m2;
    avg=tot/2;
    if(m1>=35&&m2>=35)
        res='P';
            else
                res='F';
    printf("\nname=%s,rno=%d,m1=%d,m2=%d,total=%d,average=%.2f,result=%c",name,rno,m1,m2,tot,avg,res);
    
}