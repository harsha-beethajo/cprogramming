#include <stdio.h>
typedef struct 
{
    int weight,height;
}measures;
int main()
{
    measures HW[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Person %d:\n ",i+1);
        printf("Enter weight(in kg): ");
        scanf("%d",&HW[i].weight);
        printf("Enter height(in cm): ");
        scanf("%d",&HW[i].height);
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        printf("Person %d\n",i+1);
        printf("Height = %d cm\n Weight = %d kg\n\n",HW[i].height,HW[i].weight);

    }
    return 0;
    
}