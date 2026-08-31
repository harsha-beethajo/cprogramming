#include <stdio.h>
float average(int num, int digit)
{
    int sum = 0, count = 0;
    while (num > 0)
    {
        if (num % 10 <= digit)
        {
            count++;
            sum = sum + (num % 10);
        }
        num = num / 10;
    }
    float Avg;
    Avg = (float)sum / count;
    return Avg;
}
int main()
{
    int num, digit;
    printf("Enter a number and a digit: ");
    scanf("%d %d", &num, &digit);
    printf("The average of numbers is: %.2f", average(num, digit));
    return 0;
}

