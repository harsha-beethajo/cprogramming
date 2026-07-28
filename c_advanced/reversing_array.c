#include <stdio.h>
#define SIZE 6
void ReverseArray(int size, char *array)
{
    int i;
    char temp;
    for (i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
    for (i = 0; i < size; i++)
        printf("%c ", array[i]);
}
int main()
{
    char arr[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f'};
    ReverseArray(SIZE, arr);
    return 0;
}