#include <stdio.h>
#define SIZE 5
void swapArray_On(int *arr1, int *arr2)
{
    int i;
    int temp;
    for (i = 0; i < SIZE; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
void printArray(int *arr)
{
    int i;
    for (i = 0; i < SIZE; i++)
        printf("%2d ", arr[i]);
    printf("\n");
}
int main()
{
    int array1[SIZE] = {1, 2, 3, 4, 5};
    int array2[SIZE] = {6, 7, 8, 9, 10};
    printf("Array before swap:\n");
    printArray(array1);
    printArray(array2);
    printf("\n");
    swapArray_On(array1, array2);
    printf("Array after swap:\n");
    printArray(array1);
    printArray(array2);
}