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
    
    printf("%d", LENGTH (name));
    return 0;
}