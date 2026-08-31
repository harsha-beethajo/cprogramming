#include <stdio.h>
#define size 100
int LENGTH(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
int main()
{
    char name[size];
    gets(name);
    /*
   THIS is without the use of function...

    int i=0;
    while (name[i]!='\0')
    i++;
    printf("%d",i); */
    int i = 0;
    int space_count = 0;
    for (i = 0; i < size; i++)
    {

        if (name[i] == ' ')
        {
            space_count++;
        }
    }

    printf("%d\n", space_count);
    printf("Length of characters: %d", LENGTH(name) - space_count);
    return 0;
}