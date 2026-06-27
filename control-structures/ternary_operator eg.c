#include <stdio.h>
int main()
{
    int num1, num2, min;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);
    min = (num1 > num2) ? num2 : num1; //ternary operator!
    printf(" the minimum number is %d ", min);
    return 0;
}