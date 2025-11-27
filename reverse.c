#include<stdio.h>
#include<string.h>
#include<process.h>
struct student
{
	char name[25];
	int rn,m1,m2,tot;
	float avg;
	char res[15];
};
void main()
{
	struct student s;
	FILE *fp;
	fp=fopen("stud1.dbf","rb");
	if(fp==NULL)
	{
		printf("\n ERROR:Unable to open the file");
		exit(1);
	}
	printf("\n student details\n");
	while(fread(&s,sizeof(s),1,fp)==1)
	{
		printf("\nname=%s\nrn=%d\nm1=%d\nm2=%d\ntot=%d\navg=%f\nres=%s\n",s.name,s.rn,s.m1,s.m2,s.tot,s.avg,s.res);
	}
	fclose(fp);
}
