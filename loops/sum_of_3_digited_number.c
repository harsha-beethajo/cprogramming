#include <stdio.h>
int main()
{
    int num, x, y, z;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    x = num / 100;
    y = (num / 10) % 10;
    z = num % 10;
    printf("The sum of 3 digits of %d number is %d", num, x+y+z);
    return 0;
}