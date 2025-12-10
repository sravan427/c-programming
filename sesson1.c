#include <stdio.h>
#include <string.h>
struct student_info
{
    char name[50];
    char roll_no[11];
    char sec[6];
    char gender[7];
};
    int main()
{
#define MAX_STUDENTS 840
struct student_info Student_info[MAX_STUDENTS];int count = 0,i;
FILE *fp;
fp=fopen("stdbkd.txt","a");
for (i = 0; i < 840; i++)
{
pass_booking:

    printf("enter name /[Exit] :");

    scanf(" %[^\n]", Student_info[i].name);

        if (!strcmp(Student_info[i].name, "Exit"))

            {

                goto prog_exit;

            }

    printf("enter roll_no: ");
    scanf(" %[^\n]", Student_info[i].roll_no);
    printf("enter sec: ");
    scanf(" %[^\n]", Student_info[i].sec);
    printf("enter gender: ");
    scanf(" %[^\n]", Student_info[i].gender);
    for (int j = 0; j < i; j++)
    {

        if (!strcmp(Student_info[i].roll_no,Student_info[j].roll_no))

        {

            printf("\nalready booked! enter again.\n");
            goto pass_booking;                

        }

    }

    fprintf(fp, "%s|%s|%s|%s\n",Student_info[i].name,Student_info[i].roll_no,Student_info[i].sec,Student_info[i].gender);
    printf("+-------------------------------------+\n");
    printf("| NAME   : %s\n", Student_info[i].name);
    printf("| ROLL NO: %s\n", Student_info[i].roll_no);
    printf("| SECTION: %s\n", Student_info[i].sec);
    printf("| GENDER : %s\n", Student_info[i].gender);
    printf("+-------------------------------------+\n");

}
fclose(fp);
prog_exit:

        printf("Report\n");
        printf("+---------------------------------------------------------+\n");
        printf("ROLL NO     SECTION     GENDER    NAME\n");
        printf("+---------------------------------------------------------+\n");
        for (int x = 0; x < i; x++)
        {   
            printf("%s\t\t %s\t\t %s\t %s\n",Student_info[x].roll_no,Student_info[x].sec,Student_info[x].gender,Student_info[x].name);

}
printf("+---------------------------------------------------------+\n");
return 0;

} 