#include <stdio.h>
void sum(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    printf("sum = %d", total);
}

int main()
{
    int arr[3] = {5, 6, 7};
    sum(arr,3);
    return 0;
}