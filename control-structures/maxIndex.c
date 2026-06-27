#include <stdio.h>
int main()
{
    int num[5];
    int i;
    int maxindex;
    printf("Do Not repeat same number!\n");
    printf("*Numbers only from 0-9*\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter number [%d]: ", i);
        scanf("%d", &num[i]);   
    }
    maxindex = 0; 
    for (i = 1; i < 5; i++)
    {
        if (num[i] > num[maxindex])
        {
            maxindex = i;
        }
    }
    printf("\n");
    printf("The max index is %d", maxindex);
    return 0;
}