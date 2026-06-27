#include <stdio.h>
int maxBetween3()
{
    int num1, num2, num3;
    printf("Enter num1, num2, num3: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
            return num1;
        else
            return num3;
    }
    else
    {
        if (num2 > num3)
            return num2;
        else
            return num3;
    }
}

int main()
{
    int maximum;
    maximum = maxBetween3();
    printf("maximum = %d", maximum);
    return 0;
}

/*    This code can be written like this also:    */

// int maxBetween3(int num1, int num2, int num3)
// {
//      if (num1 > num2)
//     {
//         if (num1 > num3)
//             return num1;
//         else
//             return num3;
//     }
//     else
//     {
//         if (num2 > num3)
//             return num2;
//         else
//             return num3;
//     }
// }
// int main()
// {
//     int maximum;
//     int a, b, c;
//     printf("Enter num1, num2, num3: \n");
//     scanf("%d%d%d", &a, &b, &c);
//     maximum = maxBetween3(a,b,c);
//     printf("maximum = %d", maximum);
//     return 0;
// }