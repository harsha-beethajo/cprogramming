#include <stdio.h>

int main()
{
    int Sn, a1, n, d;
    printf("Enter the first term: ");
    scanf("%d", &a1);
    printf("Enter the no. of terms: ");
    scanf("%d", &n);
    printf("Enter the common diff:");
    scanf("%d", &d);
    Sn = n / 2 * (2 * a1 + (n - 1) * d);
    printf("the summation of the AP sequencce = %d", Sn);
    return 0;
}