#include <stdio.h>

int main()
{
    int a1, n, d, a_n;
    printf("do you want to find out the last term of an AP?\n");
    printf("enter the value of n:");
    scanf("%d", &n);
    printf("enter the first term:");
    scanf("%d", &a1);
    printf("enter the common diff: ");
    scanf("%d", &d);
    a_n = a1 + (n - 1) * d;
    printf("the last term of AP is = %d", a_n);
    return 0;
}