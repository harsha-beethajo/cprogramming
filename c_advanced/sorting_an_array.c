#include <stdio.h>
int main()
{
    int ArrSorting[7] = {3, 4, 1, 9, 4, 8, 2};
    int i, j, temp;

    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (ArrSorting[i] > ArrSorting[j])
            {
                temp = ArrSorting[i];
                ArrSorting[i] = ArrSorting[j];
                ArrSorting[j] = temp;
            }
        }
    }
    for (i = 0; i < 7; i++)
        printf("%d\n", ArrSorting[i]);
    return 0;
}
