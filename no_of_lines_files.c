#include <stdio.h>
int main()
{
    FILE *filevariable;
    int character = 0;
    int count = 0;
    int number_of_lines = 0;
    filevariable = fopen("file2.txt", "r");
    if (filevariable != NULL)
    {
        printf("The file is opened!\n");

        while ((character = fgetc(filevariable)) != EOF)
        {
            count++;
            if (character == '\n')
                number_of_lines++;
        }
        printf("\nCount of characters(including space) is = %d\n", count);
        printf("No. of lines = %d", number_of_lines);
        fclose(filevariable);
    }
    return 0;
}