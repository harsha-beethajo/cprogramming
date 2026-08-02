#include <stdio.h>
#define SIZE 5
int main()
{
    int num[SIZE] = {9, 9, 2, 2, 5};
    int count[SIZE] = {1, 1, 1, 1, 1};
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (i != j)
            {
                if (num[i] == num[j])
                {
                    count[i]++;
                }
            }
        }
    }

    for (int k = 0; k < SIZE; k++)
        printf("valuee : %d appeared %d times \n", num[k], count[k]);
}