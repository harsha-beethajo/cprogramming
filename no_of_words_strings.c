#include <stdio.h>
int length(char *name)
{
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char sentence[500];
    int LENGTH;
    int no_of_words = 0;
    gets(sentence);
    LENGTH = length(sentence);
    for (int i = 0; i < LENGTH +1; i++) 
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            no_of_words++;
        }
    }
    printf("there are a total of %d words", no_of_words);
    return 0;
}
