#include <stdio.h>
void max2(int num)

{
    int units_place;
    int tens_place;
    units_place = num % 10;
    tens_place = num / 10;
    //   num > 99 ? printf("Error...its not a two digited number!"):
    //   units_place < tens_place? printf("%d is maxium", tens_place):
    //   units_place == tens_place? printf("Both values are same!!"):
    //   units_place > tens_place? printf("%d is maximum", units_place):
    //   printf("nothing!");
    if (num > 99)
    {
        printf("Error...its not a two digited number!");
    }
    else if (num < 10 && num > 0)
    {
        printf("Error...enter a 2- digited number!!");
    }
    else if (num<0)
    {
        printf("Enter a positive number!!");
    }
     else if (units_place < tens_place)
    {
        printf("%d is maxium", tens_place);
    }
    else if (units_place == tens_place)
    {
        printf("Both values are same!!");
    }
    else if (units_place > tens_place)
    {
        printf("%d is maximum", units_place);
    }
}

int main()
{
    int n;
    printf("Enter a 2-digited nuber:");
    scanf("%d", &n);
    max2(n);
    return 0;
}
