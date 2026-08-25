#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *a;
    int arraySizeAllocation;
    scanf("%d",&arraySizeAllocation);
    a = malloc(sizeof(int) * arraySizeAllocation);
    if (a!=NULL)
        printf("success");
    else
    printf("failed");
    return 0;
    
}