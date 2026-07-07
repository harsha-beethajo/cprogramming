#include <stdio.h>
int main()
{
    int num[6];
    int i, j;
    
    for (i = 0; i < 6; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (i = 0; i < 6; i++)
    {
        int repeat = 0;
        for (j = 0; j < 6; j++)
        {
            if (i == j)
                continue;
                
            if (num[i] == num[j])
            {
                repeat = 1;
                break;
            }      
        }
        if (repeat != 1 )
            {
                printf("\nUnique number = %d\n", num[i]);
            }
    }
    return 0;
}