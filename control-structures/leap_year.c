#include <stdio.h>
int main()
{
    int num;
    printf("Enter the year:");
    scanf("%d", &num);

    if (num % 4 == 0)
        printf("The year is Leap year!");
    else if (num % 100 == 0)
        printf("it is NOT a Leap year!");
    else if (num % 400 == 0)
        printf("The year is Leap year!");
    else 
    printf("The year is not Leap year");
    return 0;
}