#include <stdio.h>
int main()
{
    printf("%c", 201);
    for (int i = 1; i <= 19; i++)
        i % 5 != 0 ? printf("%c", 205):printf("%c", 203);
    printf("%c\n", 187);

    for (int i = 0; i <= 20; i++)
        i % 5 == 0 ? printf("%c", 186):printf("%c", 32);
    

    return 0;
}
