#include <stdio.h>
int main()
{
    float temp[7];
    int i;
    int hottest = 0;
    int coldest = 0;
    float sum = 0;
    float Avg;
    for (i = 0; i < 7; i++)
    {
        printf("Enter the temperature(in celcius) on day %d : ", i + 1);
        scanf("%f", &temp[i]);
    }

    printf("You have entered:\n");

    for (i = 0; i < 7; i++)
    {
        printf("%.1f, ", temp[i]);
    }

   
    for (i = 1; i < 7; i++)
    {
        if (temp[hottest] < temp[i])
        {
            hottest = i;
        }
        if (temp[coldest] > temp[i])
        {
            coldest = i;
        }
    }
    printf("\nAnswer:\n");
    printf("day %d is hottest\n", hottest + 1);
    printf("day %d is coldest\n", coldest + 1);
    for (i = 0; i < 7; i++)
    {

        sum = sum + temp[i];
    }
    Avg = sum / 7.0;
    printf("average = %.3f", Avg);
    return 0;
}