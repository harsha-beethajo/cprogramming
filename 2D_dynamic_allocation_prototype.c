#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a;
    int i, rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    a = (int **)calloc(rows, sizeof(int *));
    for (i = 0; i < rows; i++)
    {
        printf("Enter the number of columns: ");
        scanf("%d", &columns);
        a[i] = (int *)calloc(columns, sizeof(int));
    }

    return 0;
}
