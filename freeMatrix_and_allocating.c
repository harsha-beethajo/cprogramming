#include <stdio.h>
#include <stdlib.h>

int **allocateMatrix(int *outRows)
{
    int rows;
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) // if rows >=1, this part is skipped!
        return NULL;

    int **a = (int **)calloc(rows, sizeof(int *));
    if (!a)
        return NULL;

    for (int i = 0; i < rows; i++)
    {
        int columns;
        printf("Enter number of columns for row %d: ", i);
        if (scanf("%d", &columns) != 1 || columns <= 0)
        {
            // Free already allocated memory on input failure
            for (int j = 0; j < i; j++)
            {
                free(a[j]);
            }
            free(a);
            return NULL;
        }

        a[i] = (int *)calloc(columns, sizeof(int));
        if (!a[i])
        {
            // Free already allocated memory on allocation failure
            for (int j = 0; j < i; j++)
            {
                free(a[j]);
            }
            free(a);
            return NULL;
        }
    }

    *outRows = rows; // rows will be sent to main(), which is used again by freeMatrix().
    return a;
}

void freeMatrix(int **matrix, int rows)
{
    if (!matrix)
        return;

    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

int main()
{
    int rows = 0;
    int **matrix = allocateMatrix(&rows);

    if (matrix != NULL)
    {
        printf("Matrix allocated successfully with %d rows\n", rows);
        freeMatrix(matrix, rows);
    }
    else
    {
        printf("Failed to allocate matrix or invalid input.\n");
    }

    return 0;
}
