#include <stdio.h>
int main()
{
    int i;
    printf("%c", 201);
    for (i = 1; i <= 19; i++)
    {
        if (i % 5 != 0)
        {
            printf("%c", 205);
        }
        else
            printf("%c", 203);
    }
    printf("%c\n", 187);

    for (i = 0; i <= 20; i++)
    {
        if (i % 5 == 0)
        {
            printf("%c", 186);
        }
        else
        printf("%c", 32);
        
    }
    return 0;
}

// ╔ ════╦════╦════╦════ ╗
// ║     ║    ║    ║     ║