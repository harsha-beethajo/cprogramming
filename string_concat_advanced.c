// write a function that receives string.
// return a concatenated string back to main.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strConcatenation(char *str)
{    
    char *newStr;
    int i;
    int originalLength = strlen(str);
    newStr = (char*)malloc(2 * originalLength * sizeof(char) + 1); // (+1) for '\0'
    for (i = 0; i < originalLength; i++)
    {
        newStr[i] = str[i];
        newStr[i+originalLength] = str[i];
    }
    newStr[i+originalLength] = '\0';
    return newStr;
}

int main()
{
    char *str = "Alpha";
    char *strconc = strConcatenation(str);
    printf("%s\n",strconc);
   return 0;
}