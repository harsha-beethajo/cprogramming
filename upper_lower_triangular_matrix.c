#include <stdio.h>
#include <stdlib.h>

int **Lower_triangular_matrix(int n)
{
   int i;
   int **a = (int**)calloc(n,sizeof(int*));
   for (i = 0; i < n; i++)
   {
      a[i] = (int*)calloc(i+1,sizeof(int));
   }
   
   return a;
}
int **Upper_Triangular_matrix(int n)
{
   int **a = (int**)malloc(n*sizeof(int*));
   int i;
   for (i = 0; i < n; i++)
   {
     a[i] = (int*)malloc((n-i)*sizeof(int));
   }
   return a;
   
}
int main()
{
    int rows = 3;
    int **Arr1 = Lower_triangular_matrix(rows);
    int **Arr2 = Upper_Triangular_matrix(rows);
}