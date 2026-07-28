#include <stdio.h>
#define SIZE 3
int InputArray(int size, int *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter number 1: ");
        scanf("%d", &arr[i]);
    }
}
int DisplayArray(int size, int *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("value = %d\n",arr[i]);
    }
    
}
int main()
{
    int grades[SIZE];
  InputArray(SIZE,grades);
  DisplayArray(SIZE,grades);
  return 0;
}