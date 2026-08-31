#include <stdio.h>
int *arrayCreate()
{
    int i;
    static int arr[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    return arr;
}
int main()
{
  int *a;
  a = arrayCreate();
  for (int i = 0; i < 5; i++)
    printf("%d  ",a[i]);
    return 0;
}