// #include <stdio.h>
// #include <string.h>

// struct student_info
// {
//     char name[50];
//     char roll_no[10];
//     char sec[6];
//     char gender[7];
// };
// int main()
// {
//     #define MAX_STUDENTS 840
//     struct student_info Student_info[MAX_STUDENTS];

//     int count = 0,i;
//     char roll_no[840][10];
//     FILE *fp;

//     for (i = 0; i < 840; i++)
//     {
//     pass_booking:

//         fp=fopen("stdbkd.txt","ab");
//         printf("enter name /[Exit] :");
//         scanf(" %[^\n]", Student_info[i].name);
//             if (!strcmp(Student_info[i].name, "Exit"))
//                 {
//                     goto prog_exit;
//                 }
//         printf("enter roll_no: ");
//         scanf(" %[^\n]", Student_info[i].roll_no);

//         printf("enter sec: ");
//         scanf(" %[^\n]", Student_info[i].sec);

//         printf("enter gender: ");
//         scanf(" %[^\n]", Student_info[i].gender);

//         // check duplicate roll_no
//         for (int j = 0; j < i; j++)
//         {
//             if (!strcmp(Student_info[i].roll_no, roll_no[j]))
//             {
//                 printf("\nalready booked! enter again.\n");
//                 fclose(fp);
//                 goto pass_booking;                
//             }
//         }
//         fwrite(&Student_info[i], sizeof(struct student_info), 1, fp);
//         strcpy(roll_no[i], Student_info[i].roll_no);

//         printf("+-------------------------------------+\n");
//         printf("| NAME   : %s\n", Student_info[i].name);
//         printf("| ROLL NO: %s\n", Student_info[i].roll_no);
//         printf("| SECTION: %s\n", Student_info[i].sec);
//         printf("| GENDER : %s\n", Student_info[i].gender);
//         printf("+-------------------------------------+\n");
//     }
//     prog_exit:
//             printf("Report\n");
//             printf("+---------------------------------------------------------+\n");
//             printf("ROLL NO     SECTION     GENDER    NAME\n");
//             printf("+---------------------------------------------------------+\n");
//             for (int x = 0; x < i; x++)
//             {

//                 printf("%s\t\t %s\t\t %s\t %s\n", Student_info[x].sec, Student_info[x].roll_no, Student_info[x].gender,Student_info[x].name);
//             }
//             printf("+---------------------------------------------------------+\n");

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// struct student_info {
//     char name[50];
//     char roll_no[11];
//     char sec[6];
//     char gender[7];
// };

// #define MAX_STUDENTS 840

// int main() {
//     struct student_info Student_info[MAX_STUDENTS];
//     char roll_no[MAX_STUDENTS][10];
//     int count = 0;

//     FILE *fp = fopen("stdbkd.txt", "ab");
//     if (!fp) {
//         printf("File error!\n");
//         return 0;
//     }
//     while (count < MAX_STUDENTS) {
//         printf("Enter name / [Exit]: ");
//         scanf(" %[^\n]", Student_info[count].name);

//         if (!strcmp(Student_info[count].name, "Exit"))
//             break;

//         printf("Enter roll_no: ");
//         scanf(" %[^\n]", Student_info[count].roll_no);
//         int duplicate = 0;
//         for (int j = 0; j < count; j++) {
//             if (!strcmp(Student_info[count].roll_no, roll_no[j])) {
//                 printf("\nAlready booked! Enter again.\n\n");
//                 duplicate = 1;
//                 break;
//             }
//         }
//         if (duplicate)
//             continue;

//         printf("Enter section: ");
//         scanf(" %[^\n]", Student_info[count].sec);

//         printf("Enter gender: ");
//         scanf(" %[^\n]", Student_info[count].gender);
//         strcpy(roll_no[count], Student_info[count].roll_no);
//         fwrite(&Student_info[count], sizeof(struct student_info), 1, fp);

//         printf("\n+-------------------------------------+\n");
//         printf("| NAME   : %s\n", Student_info[count].name);
//         printf("| ROLL NO: %s\n", Student_info[count].roll_no);
//         printf("| SECTION: %s\n", Student_info[count].sec);
//         printf("| GENDER : %s\n", Student_info[count].gender);
//         printf("+-------------------------------------+\n\n");

//         count++;
//     }
//     fclose(fp);
//     printf("\nReport\n");
//     printf("+---------------------------------------------------------+\n");
//     printf("ROLL NO     SECTION     GENDER     NAME\n");
//     printf("+---------------------------------------------------------+\n");
//     for (int i = 0; i < count; i++) {
//         printf("%-10s %-10s %-10s %s\n",
//                Student_info[i].roll_no,
//                Student_info[i].sec,
//                Student_info[i].gender,
//                Student_info[i].name);
//     }
//     printf("+---------------------------------------------------------+\n");

//     return 0;
// }
// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct student_info
{
    char name[50];
    char roll_no[11];
    char sec[6];
    char gender[7];
};
int main() {
    struct student_info s;
    char rno[11],b[840][11];
    char line[200];
    FILE *fp;
    fp=fopen("stdbkd.txt","r");
for(int i=0;i<840;i++)
{
    enter_no:
    printf("ENTER YOUR NO.");
    scanf("%s",rno);
   
   for(int j=0; j<i; j++) {
            if(strcmp(rno, b[j]) == 0) {
                printf("Already entered. Try again.\n\n");
                goto enter_no;
            }
        }
    rewind(fp);
   int k=0;
   while (fgets(line, sizeof(line), fp)) 
{
    sscanf(line, "%[^|]|%[^|]|%[^|]|%s",
       s.name, s.roll_no, s.sec, s.gender);
       if(strcmp(s.roll_no, rno) == 0) {
        printf("welcome\n");
        printf("Name:%s\nRoll no:%s\nSection:%s\nGender:%s\n", s.name, s.roll_no, s.sec,s.gender
        );
        k=1;
        strcpy(b[i],rno);
        break;
    }
}
     if(k==0)
    {
        printf("id not found\n");
        goto enter_no;
    }
    printf("welcome to freshers");  
}
fclose(fp);
return 0;
}