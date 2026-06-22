#include <stdio.h>
int main()
{
    int age;
    int year;
    year= 2026;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("you were born in %d", year-age);
    return 0;
}