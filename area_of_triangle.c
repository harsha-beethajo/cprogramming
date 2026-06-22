#include <stdio.h>
int main()
{
     int base;
     int height;
     int area;

     printf("Enter Base length:");
     scanf("%d", &base);
     printf("Enter Height length:");
     scanf("%d" , &height);
     area= (base*height)/2 ;
     printf("The area fo triangle is = %d", area);
return 0;
}