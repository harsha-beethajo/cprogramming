#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void printArray(int *arr)
{
    int i;
    for (i = 0; i < SIZE; i++)
        printf("%d ",arr[i]);
    printf("\n");
    
}
int main()
{
    int *Arr1, *Arr2;
    int **ptr1, **ptr2;
    ptr1 = &Arr1;
    ptr2 = &Arr2;
    Arr1 = (int*)malloc(sizeof(int)*SIZE);
    Arr2 = (int*)malloc(sizeof(int)*SIZE);
    printf("Enter array(1) elements: ");
    for (int i = 0; i < SIZE; i++)
        scanf("%d",&Arr1[i]);
    printf("Enter array(2) elements: ");
    for (int i = 0; i < SIZE; i++)
        scanf("%d",&Arr2[i]);
        printf("Array before swap:\n");
    printArray(Arr1);
    printArray(Arr2);
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Array after swap:\n");
    printArray(Arr1);
    printArray(Arr2);
}