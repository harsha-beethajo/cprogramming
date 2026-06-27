#include <stdio.h>
int factors(int n)
{
    int i;
    int sum = 0;
    printf("The factors of %d are :\n", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d \n", i);
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int num;
    printf("enter a number(1-100):");
    scanf("%d", &num);
    printf("And sum of the factors of %d = %d",num , factors(num));
    return 0;
}