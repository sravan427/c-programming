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
            if(strcmp(rno,b[j]) == 0) 
            {
                printf("Already entered. Try again.\n\n");
                goto enter_no;
            }
        }    rewind(fp);
    int k=0;
    while (fgets(line, sizeof(line), fp)) 
    {
        sscanf(line, "%[^|]|%[^|]|%[^|]|%s",s.name, s.roll_no, s.sec, s.gender);
        if(strcmp(s.roll_no, rno) == 0) {
        printf("welcome\n");
        printf("Name:%s\nRoll no:%s\nSection:%s\nGender:%s\n", s.name, s.roll_no, s.sec,s.gender);
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
    
    printf("welcome to freshers\n");
    

    
}
fclose(fp);
return 0;
}

