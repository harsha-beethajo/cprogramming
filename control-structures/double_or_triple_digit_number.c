#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num >= 10 && num <= 99)
        printf("The number is double-digit!");
    else if (num >= 100 && num <= 999)
        printf("The number is triple-digit!");
    else
        printf("Error...the number is neither double nor triple digit!!!");

    return 0;
}