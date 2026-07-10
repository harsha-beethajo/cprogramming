#include <stdio.h>
#define size 5

int main()
{
    int arr[size];
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter no.%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("You have entered numbers: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
   
        if (arr[0] == arr[size - 1] && arr[1] == arr[size - 2])
        {
            printf("\nCorrect! numbers are in palindrome");
        }
        else
            printf("\nWrong! numbers are not in palindrome!!");
   
    return 0;
}