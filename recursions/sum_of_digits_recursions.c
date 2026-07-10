#include <stdio.h>
int sum(int n)
{
    if (n >= 10)
    return sum(n / 10) + n % 10;
    return n;
    
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("sum = %d",sum(num));
}