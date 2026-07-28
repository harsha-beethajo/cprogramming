#include <stdio.h>
typedef struct
{
    char name[50];
    float weight,height;
}My;

My credentials()
{ 
    My details;
    printf("Enter name: ");
    scanf(" %49[^\n]", details.name);
    printf("Enter height(in cm): ");
    scanf("%f",&details.height);
    printf("Enter weight(in kg): ");
    scanf("%f",&details.weight);
    return details;
}
float avg()
{
    int Marks[5];
    float average = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter grade %d: ",i+1);
        scanf("%d",&Marks[i]);
        average = average + (float)Marks[i]/5;
    }
    printf("\n");
     return average;
}

void me(My details,float avg)
{
    printf("\nName : %s\n",details.name);
    printf("Height : %.2f cm\n",details.height);
    printf("Weight : %.2f kg\n",details.weight);
    printf("Percentage Marks : %.2f%%\n\n",avg);
}


int main()
{
    My student[3];
    float average[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d:- \n", i + 1);
        student[i]= credentials();
        average[i]= avg();
    }

    printf("\nStudent Details:\n");

      for (int i = 0; i < 3; i++)
      {
        printf("student %d: \n",i+1);
        me(student[i],average[i]);
      }
    printf("\nThank you!\n");
    return 0;
}
        