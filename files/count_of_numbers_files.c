#include <stdio.h>
int main()
{
    FILE *filevariable;
    int characters;
    int count=0;
    filevariable = fopen("newfile1.txt", "r");
    if (filevariable != NULL)
    {
        printf("The file is opened!\n");
        characters = fgetc(filevariable);
        while (characters != EOF) /*(characters = fgetc(filevariable)) != EOF*/ //this is method-2)
        {
            printf("%c", characters);
            count++;
            characters = fgetc(filevariable);
        }
        printf("\nCount of characters is = %d",count);
        fclose(filevariable);
    }
    return 0;
}