#include <stdio.h>
#include <stdlib.h>
int **allocateMatrix()
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int **a;
    a = (int **)calloc(rows, sizeof(int *));
    if (!a)
        return NULL;
    for (int i = 0; i < rows; i++)
    {
        printf("Enter number of columns for a[%d] row: ", i);
        scanf("%d", &columns);
        a[i] = (int *)calloc(columns, sizeof(int));
    }
    return a;
}
int main()
{
    int **matrix = allocateMatrix();
    return 0;
}