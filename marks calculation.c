#include <stdio.h>
int main()
{
    int grade;
    printf("Enter your marks:");
    scanf("%d", &grade);

    if (grade >= 80)
        printf("good job!");
    else if (grade >= 60 && grade < 80)

        printf("Can do better!");

    else if (grade >= 40 && grade < 60)

        printf("major improvement needed");

    else

        printf("Not good!");
    return 0;
}