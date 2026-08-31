#include <stdio.h>
#define size 5

int main()
{
    int arr[size] = {6,5,1,9,4}, max = arr[0] + arr[1];

    for (int i = 1; i < size - 1; i++)
        max = (arr[i] + arr[i + 1] > max) ? arr[i] + arr[i + 1] : max; 
        //if true, set maximum to new max. or else, continue with the same max.
    printf("%d is the maximum sum of adjacent elements", max);
    // 13 will be the maximum
}
