#include <stdio.h>
#include <stdlib.h>
int main()
{
   int count=0;
   int arr[] = {1,3,3,5,6,7,7,7,8,12,12};
    int *ArrWithoutDuplicates;
    int newsize;
   int i,j=0;
   int n = sizeof(arr)/sizeof(arr[0]);
   for(i = 1; i < n; i++)
   {
      if (arr[i-1] == arr[i])
      {
        count++;
      }
   }
   newsize = 11-count;
   ArrWithoutDuplicates = (int*)malloc(newsize*sizeof(int));
   
   for (i = 0; i < n; i++)
   {
     if (arr[i-1] != arr[i])
     {
         ArrWithoutDuplicates[j] = arr[i];
         j++;
     }
   }
   for (i = 0; i < newsize; i++)
   {
     printf("%d ",ArrWithoutDuplicates[i]);
   }
   return 0;
}