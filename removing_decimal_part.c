#include <stdio.h>
int main()
{
    float num;
    printf("Enter the number:");
    scanf("%f", &num);
    printf("the fractional part is %.1f", num - (int)num);
    return 0;
}