#include<stdio.h>
void main()
{
    int bs;
    float netsal,da,hrs,pf,it;
    printf("enter basic salary:\n");
    scanf("%d",&bs);
    if(bs>=10000)
    {
        hrs=0.4*bs;
        da=0.3*bs;
        pf=0.2*bs;
        it=0.1*bs;

    }
        if(bs<=10000)
        {
            hrs=0.04*bs;
            da=0.03*bs;
            pf=0.02*bs;
            it=0.01*bs;
        }
    netsal=hrs+da-pf-it;
    printf("netsal=%f,hrs=%f,da=%f,pf=%f,it=%f",netsal,hrs,da,pf,it);

}
