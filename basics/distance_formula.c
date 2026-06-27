#include <stdio.h>
#include <math.h>  // new term to be added. so that, maths can be used...
int main()
{
    int x1, y1, x2, y2, value;
    float distance;
    printf("Enter x1:");
    scanf("%d", &x1);
    printf("Enter x2:");
    scanf("%d", &x2);
    printf("Enter y1:");
    scanf("%d", &y1);
    printf("Enter y2:");
    scanf("%d", &y2);
    value = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
    distance = sqrt(value);
    printf("the distance between two points is = %.1f", distance);
    return 0;
}
