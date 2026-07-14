#include <stdio.h>

typedef struct
{
    int x, y;
} point;

int equalornot(point point1, point point2)
{
    return point1.x == point2.x && point1.y == point2.y;
}

int main()
{
    point p1 = {2, 3}, p2 = {2, 3};
    equalornot(p1, p2) ? printf("Points are equal\n") : printf("Points are not equal\n");
    return 0;
}