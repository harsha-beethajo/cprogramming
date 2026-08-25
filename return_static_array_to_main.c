#include <stdio.h>
int *returnARR() // this *returnARR points to the address of the 1st element of the array.
{
    static int arr[5] = {1, 2, 3, 4, 5};
    return &arr[0]; // return arr;
}

int main()
{
    int *p = returnARR(); // no need to write &returnARR(); because the function itself gives the address. 
    for (int i = 0; i < 5; i++) // so no need to mention '&' separately again.
        printf("%d\n", p[i]);
    return 0;
}