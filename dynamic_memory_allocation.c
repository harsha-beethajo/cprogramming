#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int arraysize;
    // asking user for no. of elements required for his calculation. Instead of creating fixed size(saves memory).
    printf("Enter no. of elements to be allocated : ");
    scanf("%d", &arraysize);
    arr = (int *)malloc(sizeof(int) * arraysize);
        (arr != NULL) ? printf("Allocation success!") : printf("Failed to Allocate memory!");
    return 0;
}