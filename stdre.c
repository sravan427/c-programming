#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#define ENF -1
void main()
{
	char name[25],res[10],line[100];
	int rn,m1,m2,tot;
	float avg;
	FILE *fp;
	fp=fopen("stud.txt","r");
	if(fp==NULL)
	{
		printf("\n ERROR:Unable to open the file");
		exit(1);
	}
	printf("\n student details:\n");
	while(fgets(line,sizeof(line),fp))
	{
		/*if(strcmp(line,"\n")==0)
			break;
		fputs(line,fp);*/
		sscanf(line, "%s %d %d %d %d %f %s", name, &rn, &m1, &m2, &tot, &avg, res);
	}
	{
		printf("\nname=%s\nrno=%d\nm1=%d\nm2=%d\ntot=%d\navg=%.2f\nres=%s\n",name,rn,m1,m2,tot,avg,res);
	}
	fclose(fp);
}
