#include <stdio.h>
int main()
{
    int num[10] = {8, 1, 4, 3, 0, 2, 3, 4, 5, 5};
    int max;
    int i;
    max = num[0];
    for (i = 0; i < 10; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    printf("%d is maximum", max);
    return 0;
}