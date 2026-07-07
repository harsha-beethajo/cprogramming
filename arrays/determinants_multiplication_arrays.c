#include <stdio.h>
int main()
{
    int mat1;
    int mat2;
    
    int det1[2][2];
    int det2[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter elements of det1 (%d,%d): ", i, j);
            scanf("%d", &det1[i][j]);
        }
    }
    printf("The value of the Det1(matrix) is: ");
    mat1 = (det1[0][0]) * (det1[1][1]) - (det1[0][1]) * (det1[1][0]);
    printf("%d\n", mat1);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter elements of det2 (%d,%d): ", i, j);
            scanf("%d", &det2[i][j]);
        }
    }
    printf("The value of the Det2(matrix) is: ");
    mat2 = (det2[0][0]) * (det2[1][1]) - (det2[0][1]) * (det2[1][0]);
    printf("%d\n", mat2);

    printf("The multiplication of the two matrices is :\n%d", mat1 * mat2);
    return 0;
}

