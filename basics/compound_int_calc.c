#include <stdio.h>
#include <math.h>
#include <windows.h>
float formula(float rate, float t)
{
    float result;
        result = pow((1+(rate/100)), t);
    return result;
}

int main()
{
    int principal;
    float time;
    float RR;
    float cmp_value;
    float annual_power_formula;
    
    printf("Initial investment: ");
    scanf("%d", &principal);
    printf("Tenure: ");
    scanf("%f", &time);
    printf("Interest(%%)rate: ");
    scanf("%f", &RR);

    cmp_value = (float)principal*formula(RR,time);
    system("cls");
    printf("invested amount: %d\nRate of interest(%%): %.2f\nAmount after %.0f years = %.2f",principal,RR,time,cmp_value);

return 0;
}