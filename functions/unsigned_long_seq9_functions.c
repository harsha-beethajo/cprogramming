#include <stdio.h>
unsigned long long Seq_9(int num)
{
    unsigned long long p = 0;
    for (int i = 1; i <= num; i++)

        p = p * 10 + 9;
    return p;
}
int main()
{
    int n;
    printf("Enter a number(1 to 19):");
    scanf("%d", &n);
    printf("%llu", Seq_9(n));
    return 0;
}
