#include <stdio.h>
int main()
{
    int number;
    printf("Enter number:");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("february");
        break;
    case 3:
        printf("march");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("error");
        break;
    }
    return 0;
}




