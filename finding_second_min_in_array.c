#include <stdio.h>
int second_smallest_number(int arr[])
{
    int firstMin = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (firstMin > arr[i])
        {
            firstMin = arr[i];
        }
    }
    int secondMin = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (firstMin < arr[i] && arr[i] <= secondMin)
        {
            secondMin = arr[i];
        }
    }
    return secondMin;
}
int main()
{
    int arr[5] = {5, 13, 7, 4, 9};

    printf("second smallest integer in the array = %d", second_smallest_number(arr));
    return 0;
}