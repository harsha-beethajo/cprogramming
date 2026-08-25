#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 7;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    ptr1 = &num;
    printf("%d\n",*ptr1);
    ptr2 = &ptr1;
    printf("%d\n",**ptr2);
    ptr3 = &ptr2;
    printf("%d",***ptr3);

    // ptr3 --->ptr2 --->ptr1---> num
    // A pointer to another pointer.
    return 0;
}