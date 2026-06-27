#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter 1st number: ");
    scanf("%f", &num1);
    printf("Enter 2nd number: ");
    scanf("%f", &num2);
    if (num1 > num2)
        printf("%.2f is max and %.2f is min", num1, num2);
    else
        printf("%.2f is max and %.2f is min", num2, num1);
    return 0;
}