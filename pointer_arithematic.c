#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};
    int *ptr = &arr[0];
    ptr = arr + 2;
    printf("%d",*ptr);
    return 0;
}