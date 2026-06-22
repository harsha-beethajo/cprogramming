#include <stdio.h>
int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The number is Even");
    }

    else
    {
        (num % 2 == 1),
            printf("The number is Odd");
    }
    return 0;
}