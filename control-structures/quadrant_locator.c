#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter x coordinate:");
    scanf("%d", &x);
    printf("Enter the y coordinate:");
    scanf("%d", &y);

    /*    Method-1    */ 
    // (condition)? true : false;

    (x > 0 && y > 0) ? printf("The coordinates lie in 1st quadrant") : (x < 0 && y > 0) ? printf("The coordinates lie in 2nd quadrant")
                                                                   : (x < 0 && y < 0)   ? printf("The coordinates lie in 3rd quadrant")
                                                                   : (x > 0 && y < 0)   ? printf("The coordinates lie in 4th quadrant")
                                                                                        : printf("The coordinate is located at centre");


    /*   Method-2    */                                                                                    
    // if (x > 0 && y > 0)
    // {
    //     printf("The coordinates lie in 1st quadrant");
    // }
    // else if (x < 0 && y > 0)
    // {
    //     printf("The coordinates lie in 2nd quadrant");
    // }
    // else if (x < 0 && y < 0)
    // {
    //     printf("The coordinates lie in 3rd quadrant");
    // }
    // else if (x > 0 && y < 0)
    // {
    //     printf("The coordinates lie in 4th quadrant");
    // }
    // else
    //     printf("The coordinate is located at centre");

    return 0;
}
