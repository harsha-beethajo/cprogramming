#include <stdio.h>
#include <stdlib.h>


//realloc usage


int main()
{
    int *arr;
    int *temp;
    int i, arraySize, AdditionalElements, oldSize;
    char YN;
    printf("Enter the no. of elements: ");
    scanf("%d", &arraySize);
    arr = (int *)malloc(arraySize * sizeof(int));
    (arr != NULL) ? printf("Allocation Success!\n") : exit(1);
    for (i = 0; i < arraySize; i++)
    {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    oldSize = arraySize;
    printf("Do you want to add extra elements? (y/n): ");
    scanf(" %c", &YN);
    if (YN == 'y' || YN == 'Y')
    {
        printf("\nHow many elements do you want to add?\nType the number: ");
        scanf("%d", &AdditionalElements);
        arraySize = arraySize + AdditionalElements;
        //realloc
        temp = (int *)realloc(arr, arraySize * sizeof(int));
        if (temp != NULL)
            arr = temp;
        for (i = oldSize; i < arraySize; i++)
        {
            printf("Enter the additional element arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
        printf("The elements you have entered: \n");
        for (i = 0; i < arraySize; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }

        free(arr);
    }
    else if (YN == 'n' || YN == 'N')
        exit(1);

    return 0;
}