#include <stdio.h>
typedef struct
{
    char name[50];
    int grade_class;
    char address[100];
    int roll_no;
} student;

int main()
{
    FILE *fp;
    student student_data;
    int roll_number;
    int flag=0;
    fp = fopen("studentdata.txt", "r");
    if (fp != NULL)
    {
        while (1)
        {
            rewind(fp);
            printf("Enter student id: ");
            scanf("%d", &roll_number);
            while (fscanf(fp, "%d|%49[^|]|%d|%99[^\n]",
                          &student_data.roll_no,
                          student_data.name,
                          &student_data.grade_class,
                          student_data.address) == 4)
            {
                if (student_data.roll_no == roll_number)
                {
                    printf("=====Student details=====\n");
                    printf("Name: %s\n", student_data.name);
                    printf("Class: %dth\n", student_data.grade_class);
                    printf("Address: %s\n", student_data.address);
                    flag++;
                    break;
                }
            }
            if (flag==0)
            {
                system("cls");
                printf("Student not found! Try again...\n\n");
                continue;
            }
            else
            break;
            
        }

        fclose(fp);
    }

    return 0;
}