#include <stdio.h>
#define size 10
int main()
{
    int num[size];
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\n");
    printf("you have entered:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    printf("The reverse order of the given input of numbers is:\n");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    return 0;
}