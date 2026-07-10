#include <stdio.h>
int fibonacci(int n)
{
    if (n==1)
    return 1;
    if(n<1)
    return 0;
    if(n>1)
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int num;
    printf("Enter the length of fibonacci series: ");
    scanf("%d",&num);
    printf("fibonacci of length(%d) = %d",num,fibonacci(num));
    return 0;
}