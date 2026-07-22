#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define count 4
// Function -1
int numbers[4][4] = {{1, 15, 2, 14}, {5, 13, 6, 11}, {9, 10, 8, 12}, {7, 4, 3, 0}};
int final_box[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}};

int j = 0;
int i = 0;
int k = 0;

void gotoxy(int x, int y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void hideCursor(void)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(h, &info);
}

void F1()
{
    printf("%c", 201);
    for (i = 1; i <= 19; i++)
        i % 5 != 0 ? printf("%c", 205) : printf("%c", 203);
    printf("%c\n", 187);
}
// Function -2

void F2()
{
    k = 0;
    for (i = 0; i <= 20; i++)
    {
        if (i % 5 == 0)
        {
            printf("%c", 186);
        }
        else if (i % 5 == 1)
        {
            (numbers[j][k] == 0) ? printf("%3c", 32)
                                 : printf("%3d", numbers[j][k]);
            i += 2;
            k++;
        }
        else
            printf("%c", 32);
    }
    printf("\n");
    j++;
}

// Function -3
void F3()
{
    printf("%c", 204);
    for (i = 1; i <= 19; i++)
        i % 5 != 0 ? printf("%c", 205) : printf("%c", 206);
    printf("%c\n", 185);
}
// Function -4
void F4()
{
    printf("%c", 200);
    for (i = 1; i <= 19; i++)
        i % 5 != 0 ? printf("%c", 205) : printf("%c", 202);
    printf("%c\n", 188);
}

int getkey()
{
    int ch = getch();
    // if (ch == 0 || ch == 224)
    //     ch = getch();
    //    return ch;
    return (ch == 0 || ch == 224) ? getch() : ch;
}

void swapping(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void box()
{
    F1(), F2(), F3(), F2(), F3(), F2(), F3(), F2(), F4();
}
int equal_arrays()
{

    for (int p = 0; p < count; p++)
    {
        for (int q = 0; q < count; q++)
        {
            if (final_box[p][q] != numbers[p][q])
            {
                // printf("%d ",numbers[p][q]);
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int moves = 0;
    int row0 = 3;
    int column0 = 3;

    hideCursor();
    system("cls");
    box();

    int key = getkey();

    while (key == 72 || key == 75 || key == 77 || key == 80)
    {
        printf("MOVES: %d\n", moves);
        i = 0, j = 0, k = 0;
        key = getkey();
        if (key == 80 && row0 > 0 /*Move down*/)
        {
            swapping(&numbers[row0][column0], &numbers[row0 - 1][column0]);
            row0--;
        }

        if (key == 72 && row0 < 3 /*Move up*/)
        {
            swapping(&numbers[row0][column0], &numbers[row0 + 1][column0]);
            row0++;
        }
        if (key == 77 && column0 > 0 /*move right*/)
        {
            swapping(&numbers[row0][column0], &numbers[row0][column0 - 1]);
            column0--;
        }
        if (key == 75 && column0 < 3)
        {
            swapping(&numbers[row0][column0], &numbers[row0][column0 + 1]);
            column0++;
        }

        gotoxy(0, 0);
        box();
        if (equal_arrays())
        {
            printf("congratulations! Solved\n");
            break;
        }
        fflush(stdout);
        moves++;
    }
    printf("\nTOTAL MOVES: %d\n", moves+1);
    return 0;
}