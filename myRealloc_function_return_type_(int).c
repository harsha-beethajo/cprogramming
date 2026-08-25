#include <stdio.h>
#include <stdlib.h>
/*
Build a realloc function.
Syntax: void *myRealloc(void *srcblock,unsigned oldsize,unsigned newsize)
oldsize is the bytes consumed(4 * no. of elements)
newsize is the additional bytes added (for realloc)

'srcblock' is the address of first element(which is used in malloc).
*/


int *myRealloc(int *srcblock, int oldsize, int newsize) //the return type is set to (int). only works for (int)
{
   int *resultArr = (int*)malloc(newsize);
   for (int i = 0; i < oldsize; i++)
   {
      resultArr[i] = srcblock[i];
   }
   return resultArr;

}
int main()
{
    int *arr;
    int *temp;
    int arraysize, i, AdditionalElements;
    int oldsize;
    char YN;
    printf("Enter the no. of elements: ");
    scanf("%d", &arraysize);
    arr = (int *)malloc(sizeof(int) * arraysize);
    printf("Allocating %d bytes...\n", sizeof(int) * arraysize);
    for (i = 0; i < arraysize; i++)
    {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    oldsize = arraysize;
    printf("Do you want to add extra elements? (y/n): ");
    scanf(" %c", &YN);
    if (YN == 'y' || YN == 'Y')
    {
        printf("\nHow many elements do you want to add?\nType the number: ");
        scanf("%d", &AdditionalElements);
        arraysize = arraysize + AdditionalElements;
        // myRealloc
        temp = (int *)myRealloc(arr, sizeof(int) * oldsize, sizeof(int) * arraysize);
       if (temp != NULL)
            arr = temp;
        for (i = oldsize; i < arraysize; i++)
        {
            printf("Enter the additional element arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
        printf("The elements you have entered: \n");
        for (i = 0; i < arraysize; i++)
        {
            printf("arr[%d] = %d\n", i, arr[i]);
        }

        free(arr);

    }
    else if (YN == 'n' || YN == 'N')
        exit(1);
    return 0;
}