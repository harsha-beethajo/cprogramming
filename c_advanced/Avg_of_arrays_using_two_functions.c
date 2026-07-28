#include <stdio.h>
#define SIZE 5
int SumofArray(int size, int *array)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
float Average(int addition)
{
    float avg;
    avg = (float)(addition) / (SIZE);
    return avg;
}
int main()
{
    float AVG;
    int arr[SIZE] = {6, 8, 4, 10, 7};
    AVG = Average(SumofArray(SIZE, arr));

    printf("The average of the elements is %.2f", AVG);
    return 0;
}