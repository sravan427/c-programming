// #include<stdio.h>
// typedef struct
// {
//     int marks;
//     char name[48];
// } rasa;
// int main()
// {
//     rasa arr[2];
//     printf("enter your name: ");
//     gets(arr[0].name);// arr[0].name  not arr.name
//     puts(arr[0].name);
//     printf("enter your marks: ");
//     for(int i=0;i<2;i++)
//     {
//         scanf("%d",&arr[i].marks);
//     }
// }
#include<stdio.h>
#include<string.h>
 typedef struct
{
    char name[30];
    int age;
    int noofm;
    float avg;
}cr;
int main()
{
    cr arr[3];
    printf("Enter those detailes :");
    for(int i=0;i<3;i++){
        printf("\nenter player %d detalies",i+1);
        printf("\nname :");
        scanf(" %[^\n]", arr[i].name);
        printf("age :");
        scanf("%d", &arr[i].age);
        printf("no of matches :");
        scanf("%d",&arr[i].noofm);
        printf("average: ");
        scanf("%f",&arr[i].avg);
        
    }
    printf("\n--- Cricketer Details ---\n");
    for(int i=0;i<3;i++){

        printf(" name :%s\n",arr[i].name);
        printf(" age: %d\n",arr[i].age);
        printf(" no.of matches: %d\n",arr[i].noofm);
        printf(" avrage %.2f\n",arr[i].avg);  
        printf("\n\n");
    }

}
