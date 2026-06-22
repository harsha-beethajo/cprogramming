#include <stdio.h>
int main()
{
    float celcius; 
    float fahrenheit;
    printf("Enter celcius: ");
    scanf("%f", &celcius);
    fahrenheit = (celcius)*(1.8) + 32 ;
    printf("fahrenheit = %.2f", fahrenheit);
    return 0;
}