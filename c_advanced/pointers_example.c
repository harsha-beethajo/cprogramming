#include <stdio.h>
int main()
{
    int i;
    static int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    static int *ptr[3] = {a[0], a[1], a[2]};
    int **ptr1 = ptr;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *ptr[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *a[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    { 
      printf("%d ", **ptr1);
      ptr1++;  
    }
    return 0;
    
}