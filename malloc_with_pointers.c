#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int **p2;
    p2 = &p;
    int ***ptr;
    ptr = &p2;
    int elements;
    printf("Enter elements: ");
    scanf("%d", &elements);
    **ptr = (int *)malloc(4 * elements);
    for (int i = 0; i < elements; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &(**ptr)[i]);
    }
    for (int i = 0; i < elements; i++)
    {
        printf("Element %d = %d\n",i+1,(**ptr)[i]);
    }
    return 0;
}