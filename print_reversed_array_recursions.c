#include <stdio.h>
void printOriginalArray(int *arr, int size)
{
    if (size > 0)
    {
        printf("%d ", arr[0]);
        printOriginalArray(arr + 1, size - 1);
    }
}
void printReversedArray(int *arr, int size)
{
    if (size > 0)
    {
        printf("%d ", arr[size - 1]);
        printReversedArray(arr, size - 1);
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    printOriginalArray(arr, 4);
    printf("\n");
    printReversedArray(arr, 4);
    return 0;
}