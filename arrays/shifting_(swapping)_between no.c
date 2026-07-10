#include <stdio.h>
int main()
{
    int num[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\nThe order which is expected:\n");
   /*This type of method can also be done...
    
   int temp = num[0];
    for (i = 1; i < 4; i++)
    {
      num[i-1] = num[i];
      printf("%d ",num[i-1]); 
    }
    printf("%d",temp);
    
    */

    for (i = 0; i < 4; i++)
    {
        int temp;
        temp = num[i];
        num[i] = num[i + 1];
        num[i + 1] = temp;
        printf("%d ", num[i]);
        
    }
    return 0;
}