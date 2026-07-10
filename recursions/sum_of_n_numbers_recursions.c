#include <stdio.h>
int Sum(int n);
int main()
{
    int num;
    int SUMofNumbers;
    printf("Enter a number: ");
    scanf("%d", &num);
    SUMofNumbers = Sum(num);
    (SUMofNumbers == 0)? printf("Enter ONLY NATURAL numbers!!"): printf("Sum = %d", SUMofNumbers);
    // if (SUMofNumbers == 0)
    //     printf("Enter ONLY NATURAL numbers!!");
    // else
    // printf("Sum = %d", SUMofNumbers);
    // return 0;
}
int Sum(int n)
{
    // return (n > 0)? n + Sum(n - 1) :  0;
    
    if (n > 0)
        return n + Sum(n - 1);
    else
        return 0;
}
