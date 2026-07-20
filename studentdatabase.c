#include <stdio.h>
typedef struct
{
    char name[50];
    int grade_class;
    char address[100];
    int roll_no;
} student;

student getDetails()
{
    student cred;
    printf("Enter name: ");
    scanf(" %49[^\n]", cred.name);
    printf("Enter class: ");
    scanf("%d", &cred.grade_class);
    printf("Enter roll number: ");
    scanf("%d", &cred.roll_no);
    printf("Enter address: ");
    scanf(" %99[^\n]", cred.address);
    return cred;
}

void AppendRecordToFile()
{
    // logic to write record to file
    FILE *fp;
    student student_data;
    int i;
    fp = fopen("studentdata.txt", "a");
    if (fp != NULL)
    {
        printf("The file is opened!\n");
        for (i = 0; i < 1; i++)
        {
            student_data = getDetails();
            fprintf(fp, "%d|%s|%d|%s\n", student_data.roll_no, student_data.name, student_data.grade_class, student_data.address);
        }
    }
    fclose(fp);
}

void readRecordFromFile()
{

    // logic to read record to file
    FILE *fp;
    student student_data;
    int roll_number;
    int flag = 0;
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
            if (flag == 0)
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
}

int main()
{
    int choice;
    char YN='y';

    while (YN !='n' && YN =='y')
    {
        printf("====Enter Choice====\n");
        printf("1. Add student\n2. Search student\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 3)
        {
            printf("exiting...");
            break;
        }
        if (choice > 3 || choice < 1)
        {
            printf("Enter choice only  between 1-3\n");
        }
        else
        {
            switch (choice)
            {
            case 1:
                AppendRecordToFile();
                break;
            case 2:
                readRecordFromFile();
                break;
            }
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &YN);
        // if (YN == 'y')
        //     continue;
        // else if (YN == 'n')
        //     break;
    }

    return 0;
}