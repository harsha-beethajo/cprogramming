#include <stdio.h>
float digits_less_than_number(int number, int Digit)
{
    int count = 0;
    int sum = 0;
    float Avg;
    while (number != 0)
    {
        if (number % 10 < Digit)
        {
            count++;
            sum = sum + number % 10;
        }
        number = number / 10;
    }
    Avg = (float)sum / count;
    printf("Count of digits less than the input digit = %d\n", count);
    return Avg;
}
int main()
{
    int num, digit;
    printf("enter a number:");
    scanf("%d", &num);
    printf("Enter the digit:");
    scanf("%d", &digit);
    printf("The average of the numbers less than digit '%d' is %.3f", digit, digits_less_than_number(num, digit));
    return 0;
}