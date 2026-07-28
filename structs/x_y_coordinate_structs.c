#include <stdio.h>

typedef struct
{
    int x,y;
}point;
void printvariablepoint(int a, int b)
{
  printf("(%d,%d)",a,b);
}
point returnpoint()
{
   point coordinate;
   printf("Enter x coordinate: ");
   scanf("%d",&coordinate.x);
   printf("Enter y coordinate: ");
   scanf("%d",&coordinate.y);
   return coordinate;
}
int main()
{
    point p1 = returnpoint();
    printvariablepoint(p1.x,p1.y);
    return 0;
}
