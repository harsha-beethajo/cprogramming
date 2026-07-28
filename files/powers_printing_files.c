#include <stdio.h>
int main()
{
    FILE *fp;
    int i = 1;
    fp = fopen("file3_powers_of_numbers.txt", "w");
    if (fp != NULL)
    {
        printf("The file is opened!");
        for (i = 1; i <= 60; i++)
        {
            fprintf(fp, "%2d^2 = %d\n", i, i * i);
        }
        fclose(fp);
    }
    else
        printf("NO FILE FOUND...");
}