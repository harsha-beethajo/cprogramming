#include <stdio.h>
#define size 10

int SUM()
{
    int i;
    int num[size];
    int sum=0;
    for (i = 0; i < size; i++)
  {
    printf("Enter number %d: ", i+1);
    scanf("%d", &num[i]);
  }
  for (i = 0; i < size; i++)
  {
    sum = sum +num[i];
  }
  return sum;
}
int main()
{
  int add = SUM();
  printf("the sum of elements in an array is %d",add);
  return 0;
}