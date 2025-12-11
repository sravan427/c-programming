#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
void main()
{
	char name[25],res[10],ans;
	int rn,m1,m2,tot;
	float avg;
	FILE *fp;
	fp=fopen("stud.txt","w");
	if(fp==NULL)
	{
		printf("\n ERROR:Unable to open the file");
		exit(1);
	}
	do
	{
		fflush(stdin);
		printf("\n enter name,rn,m1,m2:\n");
		scanf("%s%d%d%d",name,&rn,&m1,&m2);
		fflush(stdin);
		tot=m1+m2;
		avg=tot/2.0;
		if(m1>=35&&m2>=35)
		strcpy(res,"PASS");
		else
		strcpy(res,"FAIL");
		fprintf(fp,"%s\n%d\n%d\n%d\n%d\n%f\n%s\n",name,rn,m1,m2,tot,avg,res);
		fflush(stdin);
		printf("\n want to enter more records[y/n]:\n");
		fflush(stdin);
		scanf("%c",&ans);
		fflush(stdin);
	}while(ans=='Y'||ans=='y');
	fclose(fp);
}

