#include <stdio.h>

int main()
{
    double celcius, fahrenheit;
    printf("Enter the Fahrenheit:");
    scanf("%lf", &fahrenheit);
    celcius = (fahrenheit - 32) / 1.8;
    printf("The celcius conversion is %.2lf", celcius );
    return 0;
}