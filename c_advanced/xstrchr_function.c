#include <stdio.h>
char *xstrchr(char *string, char ch,int size)
{
    int i = 0;
    while (i<size)
    {
        if (string[i] == ch)
            return &string[i];
        i++;
    }
    return NULL;
}
int main()
{
    char str[] = "Hello, I am a C-programmer";
    int size;
    char enter_character;
    char *get_ch;
    size = sizeof(str)/sizeof(char);
    printf("Sentence: %s\n",str);
    printf("Enter a character you want to search: ");
    scanf("%1c", &enter_character);
    
    
    get_ch = xstrchr(&str[0], enter_character,size);
    if (get_ch == NULL)
    {
        printf("Not found!\n");
        return 0;
    }
    else
        printf("%s\n", get_ch);
    return 0;
}