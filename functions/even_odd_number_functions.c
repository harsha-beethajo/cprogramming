#include <stdio.h>
int isEven(int n)
{
    if (n % 2 == 0)
    return 1;
 // else
    return 0;
}

int main()
{
    int num;
    printf("Enter a number(positive):");
    scanf("%d", &num);
    printf("%d", isEven(num));
    return 0;
}