#include <stdio.h>
int SumFound(int *arr, int value)
{
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (i == j)
                continue;
            else
            {
                if (arr[i] + arr[j] == value)
                {
                    printf("arr[%d] + arr[%d] = %d\n", i, j, value);
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    int arr[7] = {1, 3, 4, 7, 9, 10, 12};
    int value;
    int sum;
    printf("Enter the value: ");
    scanf("%d", &value);
    sum = SumFound(arr, value);
    if (sum == 1)
        printf("Sum of two elements in array is found to be equal to the given value");
    else if (sum == 0)
    {
        printf("Sum not found");
    }
    return 0;
}