#include <stdio.h>
int isElementFound(int n, int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (n == array[i])
            return 1;
    }
    return 0;
}
int main()
{
    int num;
    int arr[3] = {3, 7, 5};
    printf("Enter the number: ");
    scanf("%d", &num);
    if (isElementFound(num, arr, 3) == 1)
        printf("%2d : Element found!", num);
    else
    printf(" %2d : element not found", num);
    return 0;
}