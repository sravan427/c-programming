#include <stdio.h>
#include <string.h>
struct marks
{
    int m1, m2, rollno;
    char name[16];
    float avg;
} s;
int main()
{
    printf("Enter your name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.rollno);

    printf("Enter marks 1 and marks 2: ");
    scanf("%d %d", &s.m1, &s.m2);

    if (s.m1 <= 100 && s.m2 <= 100)
    {
        s.avg = (s.m1 + s.m2) / 2.0;

        if (s.m1 >= 35 && s.m2 >= 35)
        {
            printf("Result: PASS ");

            if (s.m1 >= 90 || s.m2 >= 90)
                printf("Grade A");
            else
                printf("Grade B");
        }
        else
        {
            printf("Result: FAIL Grade G");
        }

        printf("\nAverage = %.2f", s.avg);
    }
    else
    {
        printf("Invalid marks entered!");
    }

    return 0;
}
