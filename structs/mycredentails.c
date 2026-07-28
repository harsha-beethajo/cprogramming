#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[50];
    char grade[5];
    float weight;
    float height;

} My;

My Credentials()
{
    My details;
    printf("Enter your name: ");
    gets(details.name);
    printf("Enter your Grade(A-F): ");
    gets(details.grade);
    printf("Enter your weight(in kg): ");
    scanf("%f", &details.weight);
    printf("Enter your height(in cm): ");
    scanf("%f", &details.height);
    return details;
}

int main()
{
    My source;
    source = Credentials();
    
    printf("\nName = %s\n", source.name);
    printf("Grade = %s\n", source.grade);
    printf("Weight = %.2f kg\n", source.weight);
    printf("Height = %.2f cm\n", source.height);
    return 0;
}