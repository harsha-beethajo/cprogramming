#include <stdio.h>
typedef struct
{
    char name[50];
    float height;
    float weight;
    float grade;
} My;




int main()
{
    My details = {"SRIHARHSA VARDHAN BEETHAJO", 180.34, 74.54, 91.2};
    printf("\nName = %s\n",details.name);
    printf("Height = %.2f cm\n",details.height);
    printf("Weight = %.2f kg\n",details.weight);
    printf("Grade = %.1f%%\n\n",details.grade);
    return 0;
}