#include <stdio.h>
#include <string.h>
int main()
{
    char names[6][10];
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Enter name:");
        gets(names[i]);
    }
    for (i = 0; i < 6; i++)
    {
        puts(names[i]);
    }
    return 0;
}