#include <stdio.h>
int main()
{
    char name[10] = "harsha";
    char copy[10];
    int i = 0;
    while (name[i] != '\0')
    {
        copy[i] = name[i];
        i++;
    }
     copy[i] = '\0';
    printf("%s",copy);
    return 0;
}