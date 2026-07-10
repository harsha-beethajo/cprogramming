#include <stdio.h>
int main()
{
    int num[4];
    int i, j, position;
    int temp;
    for (i = 0; i < 4; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("Enter the number of positions: ");
    scanf("%d", &position);
    printf("\n");
    printf("You have entered: ");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\nThe order which is expected: ");
    for (j = 0; j < position; j++)
    { 
        for (i = 0; i < 4; i++)
        {
            temp = num[i];
            num[i] = num[i + 1];
            num[i + 1] = temp;
        }     
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }
    
    return 0;
}