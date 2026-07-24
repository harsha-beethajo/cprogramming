#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int getkey(void);

int main(void)
{
    system("cls");
    int key=getkey();

    while (key == 72 || key == 75 || key == 77 || key == 80)
    {
        key = getkey();
        system("cls");
        printf("Key = %c\n", key);
    }
    return 0;
}

int getkey()
{
    int ch = getch();
    if (ch == 0 || ch == 224)
        ch = getch();

    return ch;
}