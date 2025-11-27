   #include<stdio.h>
   int main()
   {
    int ch;
    float units,bill;
    for(int i=0;i<=3;i++)
    {
    printf("ELECTRICITY BILLING SYSTEM\nType\tcat\t\tRate per unit\n1.\tDomestic\t3.50 per units\n2.\tcommerecial\t5.00 per units\n3.\tIndustrial\t6.50 per units\n4.\tExit\n");
    printf("Enter choice:\n");
    scanf("%d",&ch);
    printf("Enter units:\n");
    scanf("%f",&units);
    switch(ch)
    {
        case 1:
        bill=3.50*units;
        printf("bill=%.2f\n",bill);
        break;
        case 2:
        bill=5.00*units;
        printf("bill=%.2f\n",bill);
        break;
        case 3:
        bill=6.50*units;
        printf("bill=%.2f\n",bill);
        break;
        case 4:
        printf("Exit\n");
        default :
        printf("Invaild\n");
        break;
    }
   }
}
    