#include <stdio.h>
int main()
{
 int grade1, grade2, grade3;
 float Average;  //since the expected average will be in terms of decimals, 'double' is used.
     printf("Enter grade1:");
     scanf("%d", &grade1);
     printf("Enter grade2:");
     scanf("%d", &grade2);
     printf("Enter grade3:");
     scanf("%d", &grade3);
     Average =  (float)(grade1+grade2+grade3)/3 ;
     // 'double' is used here to make an 'int' variable into floating point number
     printf("the average is = %.2f", Average);
     return 0;

}