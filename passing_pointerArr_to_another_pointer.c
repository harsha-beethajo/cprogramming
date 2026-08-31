#include <stdio.h>
#include <stdlib.h>


void Create1DArray(int Size, int ****p)
{
   ***p = (int*)malloc(Size*sizeof(int));
    for (int i = 0; i < Size; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&(***p)[i]);
    }
    
    for (int i = 0; i < Size; i++)
    {
        printf("%d\n",(***p)[i]);
    }
    
}
int main()
{
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int size;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    Create1DArray(size,&ptr3);

    printf("%d ",ptr1[0]);
    printf("%d ",(*ptr2)[1]);
    printf("%d",(**ptr3)[2]);

    return 0;

}