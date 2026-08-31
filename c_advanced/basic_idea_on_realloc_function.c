#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int *temp;
    arr = (int *)malloc(3 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    // if (temp != NULL) always check this before.
    temp = (int *)realloc(arr, 5 * sizeof(int));
    arr = temp;
    arr[3] = 4;
    arr[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}