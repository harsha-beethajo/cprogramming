#include <stdio.h>
#include <stdlib.h>

int stringLength(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *strconcat(char *str1, char *str2)
{
    char *finalstr;
    int i;
    int k = 0;
    finalstr = (char *)malloc(stringLength(str1) + stringLength(str2) + 1);
    if (!finalstr)
        return NULL;
    for (i = 0; i < stringLength(str1); i++)
    {
        finalstr[i] = str1[i];
        k++;
    }
    for (i = 0; i < stringLength(str2); i++)
    {
        finalstr[i + k] = str2[i];
    }
    finalstr[i + k] = '\0';

    return finalstr;
}

int main()
{
    char str1[] = "Hello ";
    char str2[] = "world";
    char *concat = strconcat(str1, str2);
    printf("%s\n", concat);
    return 0;
}