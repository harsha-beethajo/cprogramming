#include <stdio.h>
int isArray(int arr[], int size)
{
    if (size == 1)
        return 1;
    if (arr[0] * arr[1] > 0)
        return 0;
    return isArray(arr + 1, size-1);
}
int main()
{
    int arr[5] = {-1, 1, -1, 1, -1};

    printf("%d", isArray(arr, 5));
}