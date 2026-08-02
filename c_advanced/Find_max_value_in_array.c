#include <stdio.h>

int Maxvalue(int size, int array[]) // (int size, int *array)
{
    int i,max=array[0];
    for (i = 0; i < size; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}

int main()
{
    int arr[5] = {7, 10, 9, 15, 6};
    int MAX = Maxvalue(5, arr);
    printf("Max value in Array = %d",MAX);
    return 0;
}