#include <stdio.h>
#include <stdlib.h>
// Function -1
int n = 1;
int getkey(void);
int numbers[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
void F1()
{
    printf("%c", 201);
    for (int i = 1; i <= 19; i++)
        i % 5 != 0 ? printf("%c", 205) : printf("%c", 203);
    printf("%c\n", 187);
}
// Function -2

void F2()
{
    for (int i = 0; i <= 20; i++)
    {
        // (i % 5 == 0) ? printf("%c", 186) : (i % 5 == 1 && n < 16) ? printf("%3d", n++, i += 2) : printf("%c", 32);
        if (i % 5 == 0)
        {
            printf("%c", 186);
        }
        else if (i % 5 == 1 && n < 16)
        {
            printf("%3d", n++, i += 2);
        }
        else
            printf("%c", 32);
    }
    printf("\n");
}

// Function -3
void F3()
{
    printf("%c", 204);
    for (int i = 1; i <= 19; i++)
        i % 5 != 0 ? printf("%c", 205) : printf("%c", 206);
    printf("%c\n", 185);
}
// Function -4
void F4()
{
    printf("%c", 200);
    for (int i = 1; i <= 19; i++)
        i % 5 != 0 ? printf("%c", 205) : printf("%c", 202);
    printf("%c\n", 188);
}

int getkey()
{
    int ch = getch();
    if (ch == 0 || ch == 224)
        ch = getch();

    return ch;
}

// int main()
// {
    
//     system("cls");
//     F1(), F2(), F3(), F2(), F3(), F2(), F3(), F2(), F4();
//     return 0;
// }


int main(void)
{
    system("cls");
    int key=getkey();

    while (key == 72 || key == 75 || key == 77 || key == 80)
    { 
        key = getkey();
        system("cls");
        F1(), F2(), F3(), F2(), F3(), F2(), F3(), F2(), F4();
        n=1;
    }
    return 0;
}

