#include <stdio.h>
#include <stdlib.h>

// It's like, a pointer(arr) of datatype (Point) is pointing to a struct variable.
// *arr ----> struct(dynamically_allocated_struct)
// the dataype of the pointer to the struct will be the name of the struct (Point)

typedef struct dynamically_allocated_struct
{
  int x,y; 
}Point; // the datatype 

int main()
{
    Point *arr;
    int size=5; // any size is ok
    arr = (Point*)malloc(sizeof(Point)*size);
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter point %d\n",i+1);
        printf("Enter x,y: ");
        scanf("%d %d",&arr[i].x,&arr[i].y);
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        printf("point %d : (%d,%d)\n",i+1,arr[i].x,arr[i].y);
    }
    return 0;
}