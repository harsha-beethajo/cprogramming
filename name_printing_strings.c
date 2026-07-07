#include <stdio.h>
int main()
{
    char FullName[] = "Sriharsha";
    int i = 0;
    
    while (FullName[i] != '\0')
    {
        printf("At the location or adress %d = %c\n", &FullName[i], FullName[i]);
         
        i++;
    }
   
    return 0;
}