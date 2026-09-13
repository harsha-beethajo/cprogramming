#include <stdio.h>
// Read ASCII table to know more...
int main()
{
    char str[] = "imperial palace rome attention julius caesar";
    int i = 0;
    int j = 56;
    int size = sizeof(str) / sizeof(char);
    char encoded_str[size];
    while (i <= size)
    {
        if (str[i] == ' ') // space---> 32+29 = 61
          encoded_str[i] = str[i] + 29 ;  
        else
        encoded_str[i] = str[i] - j;
        if(str[i] == '\0')
          encoded_str[i] = str[i] + 32 ;
        
        i++;
    }
    printf("Encoded string: %s\n",encoded_str);
    printf("Decoded string: %s\n",str);
    return 0;
   
    
   
}