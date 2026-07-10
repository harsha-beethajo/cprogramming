#include <stdio.h>
int main()
{
    int num[6];
    int i;
    int sum;
    for (i = 0; i < 6; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    sum = num[0] + num[1];
    for (i = 1; i < 5; i++)
    {
        if (sum < num[i] + num[i + 1])
        {
            sum = num[i] + num[i + 1];
        }
    }
    printf("%d is sum of largest adjacent numbers", sum);
    return 0;
}
