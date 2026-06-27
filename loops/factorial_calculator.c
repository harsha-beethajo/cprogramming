#include <stdio.h>
int num(int a)
{
    int i, p = 1;
    for (i = 1; i <= a; i++)
    {
        p = p * i;
    }
    return p;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("factorial = %d", num(n));
    return 0;
}
