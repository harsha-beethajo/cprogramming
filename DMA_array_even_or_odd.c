

// DMA- Dynamic Memory Allocation.

/* Given an array of int [12,5,7,8,3,10,4,9]
Create 2 dynamically allocated arrays
First array will consist of only "Even values" [12,8,10,4]
Second array will consist of only "Odd values" [5,7,3,9]
The function should simply print the values of both of the arrays.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {12, 5, 7, 8, 3, 10, 4, 9};
    int *arrEven;
    int *arrOdd;
    int evenCount = 0, oddCount = 0;
    int i,j=0,k=0;
    int size = sizeof(array) / sizeof(array[0]);
    for (i = 0; i < size; i++)
    {
        (array[i] % 2 == 0) ? evenCount++ : oddCount++;
    }
    arrEven = (int *)malloc((evenCount) * sizeof(int));
    arrOdd = (int *)malloc((oddCount) * sizeof(int));

    for (i = 0; i < size; i++)
    {
        if ((array[i] % 2 == 0))
        {
            arrEven[j] = array[i];
            j++;
        }
       if ((array[i] % 2 != 0))
       {
          arrOdd[k] = array[i];
          k++;
       }
    }
    printf("Even numbers: ");
 for (i = 0; i < evenCount; i++)
 {
    printf("%d ",arrEven[i]);
 }
 printf("\nOdd numbers: ");
 for (i = 0; i < oddCount; i++)
 {
    printf("%d ",arrOdd[i]);
 }
 free(arrEven);
 free(arrOdd);
    return 0;
}
// function can be written later. Logic is important!