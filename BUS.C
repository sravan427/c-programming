#include<stdio.h>
void read();
void print();
int choice=0,ads=0,cld=0,wfareA=20/*this is for warangal fare adults*/,wfareC=10,wfareT=0,hfareA=30,hfareC=15,hfareT=0,kfareA=40,kfareC=20,kfareT=0;
int main()
{
	read();
	print();
	return 0;
}
void read()
{
	printf("\n 1. Warangal to Hanamkonda\n 2. Hanamkonda to Kazipet\n 3. Kazipet to Madikonda\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n enter no.of adults and children:\n");
			scanf("%d%d",&ads,&cld);
			wfareT=(ads*wfareA)+(cld*wfareC);
			printf("\n wfareT=%d",wfareT);
			break;
		case 2:
			printf("\n enter no.of adults and children:\n");
			scanf("%d%d",&ads,&cld);
			hfareT=(ads*hfareA)+(cld*hfareC);
			printf("\n hfareT=%d",hfareT);
			break;
		case 3:
			printf("\n enter no.of adults and children:\n");
			scanf("%d%d",&ads,&cld);
			kfareT=(ads*kfareA)+(cld*kfareC);
			printf("\n kfareT=%d",kfareT);
			break;
		default:
			printf("Invalid choice");
			break;
	}
}
void print()
{
	if(choice>=1 && choice<=3)
	{
	printf("\n\t\t\t\t    TGSRTC\n\t\t\t\t Khammam Depot\n\t\t\t20884A05144   27/06/25   09:14");
	printf("\n\t\t\t      Service Number  HNK9\n\t\t\t\t    DELUXE\n\t\t\t  KHAMMAM-HANAMKONDA  Trip No.1\n\t\t\t WARDHANNAPET BUS STATION TO \n\t\t\t     HANUMAKONDA BUS STATION");
	printf("\n\t\t\t          ADT:%d  CLD:%d",ads,cld);
	if(choice==1)
		printf("\n\t\t\t      TOTAL FARE: Rs.%d",wfareT);
	else if(choice==2)
		printf("\n\t\t\t      TOTAL FARE: Rs.%d",hfareT);
	else if(choice==3)
		printf("\n\t\t\t      TOTAL FARE: Rs.%d",kfareT);
	else
		printf("\n\t\t\t      TOTAL FARE: Rs.0");
	printf("\n\t\t\t        NOT REFUNDABLE");
	printf("\n\t\t\t        HAPPY JOURNEY");
	}
}