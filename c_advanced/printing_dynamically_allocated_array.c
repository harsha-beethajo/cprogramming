#include <stdio.h>
#include <stdlib.h>
void scanArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void printArray(int *arr, int size)
{
    int i;
    printf("\nYour Entered Elements: \n");
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
int *AllocArray(int arraySize)
{
    int *arr = (int*)malloc(sizeof(int) * arraySize);
    printf("\nDynamically Allocated Size [%d Bytes] // %d elements\n\n",4*arraySize,arraySize);
    return arr;
}
int main()
{
    int *arr;
    int arraySize;
    printf("Enter the Size of elements: ");
    scanf("%d", &arraySize);
   arr = AllocArray(arraySize);
    scanArray(arr, arraySize);
    printArray(arr, arraySize);
    free(arr);
    arr = NULL;
    return 0;
}