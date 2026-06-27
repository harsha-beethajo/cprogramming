#include <stdio.h>
int main()      
{
    // |-x| = x
    // |x| = x  
    int x, x1;
    printf("Enter any interger: ");
    scanf("%d", &x);
    x1= -(x);
    if (x < 0)
        printf("The absolute value of the number is %d", x1);
    else
        printf("The absolute value of the number is %d", x);
    return 0;
}