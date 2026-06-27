#include <stdio.h>
int main()
{
    int grade[5];
    int i;
    int low;
    int high;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the grade no.%d: ", i + 1);
        scanf("%d", &grade[i]);
    }
    printf("Your have entered grades:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", grade[i]);
    }
    
    high = grade[0];
    low = grade[0];
    for (i = 1; i < 5; i++)
    {
        if (high < grade[i])
        {
             high = grade[i];
        }
    }
    for (i = 1; i < 7; i++)
    {
        if (low > grade[i])
        {
            low = grade[i];
        }
    }

    printf("And the lowest grade is %d\n", low);
    printf("And the highest grade is %d", high);
    return 0;
}