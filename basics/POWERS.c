#include <stdio.h>
#include <math.h>
int main()
{
    // x²  x⁴  x⁶
    int x, square, power4, power6;
    printf("Enter the value of x:");
    scanf("%d", &x);
    square = x * x;
    power4 = square * square;
    power6 = power4 * square;
    printf("x^2 = %d\nx^4 = %d\nx^6 = %d\n", square, power4, power6);
    return 0;
}