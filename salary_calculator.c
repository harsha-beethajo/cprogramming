#include <stdio.h>
int main()
{
    int hours, days, salary, pay;
    printf("Enter the no. of hours worked per day: ");
    scanf("%d", &hours);
    printf("Enter the no. of days worked in a month: ");
    scanf("%d", &days);
    printf("Enter the salary pay her hour: ");
    scanf("%d", &pay);
    salary = (hours*pay)*(days);
    printf("the expected gross monthly salary is $%d", salary);
    return 0;

}