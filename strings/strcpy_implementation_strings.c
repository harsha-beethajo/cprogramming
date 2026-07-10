#include <stdio.h>
char *mystrcpy(char *target, char *source)
{
    int i = 0;
    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
     target[i] = '\0'; //because source only copies before the '\0'. so, this statement is to copy '\0' also!!
    return target;
}
int main()
{
    char name[10] = "harsha";
    char copy[20];
    char *good;
    good = mystrcpy(copy, name);
    printf("%s\n%s", good,name);
    return 0;
}
