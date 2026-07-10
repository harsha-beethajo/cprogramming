#include <stdio.h>
int fact(int n)
{
    if (n>1)
     return n*fact(n-1);
     else
     return 1;
}
int main()
{
    int num;
    int factorial;
    printf("Enter a number: ");
    scanf("%d",&num);
    factorial = fact(num);
    if (num<0)
    printf("Enter only WHOLE numbers!");
    else
    printf("factorial = %d", factorial);
    return 0;
}