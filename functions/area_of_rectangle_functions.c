#include <stdio.h>
int area(int length, int width)
{
    int Area;
    Area = length * width;
    return Area;
}

int main()
{
    int AREA;
    int a, b;
    printf("Enter length & width of rectangle(in cm): \n");
    scanf("%d%d", &a, &b);
   
    AREA = area(a, b);
    printf("Area = %d sq.cm", AREA);
   
    return 0;
}

