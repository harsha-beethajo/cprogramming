#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strlength(char *str)
{
   int i=0;
   while (str[i] != '\0')
   {
      i++;
   }
   return i;
}
void stringcopy(char *str_dest, char *str_src)
{
    int i=0;
    while (str_src[i] != '\0')
    {
        str_dest[i] = str_src[i];
         i++;
    }
    str_dest[i] = '\0';
}
int main()
{
    char str1[] = "hello";
    char str2[strlength(str1)+1];
    stringcopy(str2, str1);
    printf("%s\n", str2);
    return 0;
}