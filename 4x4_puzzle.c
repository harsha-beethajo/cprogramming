#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
int i;
int j;
int k;
// int numbers[4][4] = {{1, 15, 2, 14}, {5, 13, 6, 11}, {9, 10, 8, 12}, {0, 4, 3, 7}};
int numbers[4][4];
int real_arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}};
void generateArray(int arr[4][4]);

void generateArray(int arr2D[4][4])
{
    int arr[16];
    for (int i = 0; i <= 15; i++)
        arr[i] = i + 1;

    srand(time(NULL));

    // Fisher-Yates shuffle
    for (int i = 15; i >= 0; i--)
    {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < 16; i++)
    {
        if (arr[i] == 16)
        {
            arr2D[i / 4][i % 4] = 0;
        }
        else
            arr2D[i / 4][i % 4] = arr[i];
    }
}
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

void func1()
{
    printf("%c", 201);
    for (i = 1; i < 20; i++)
        (i % 5 == 0) ? printf("%c", 203) : printf("%c", 205);
    printf("%c\n", 187);
}
void func2()
{
    k = 0;
    for (i = 0; i <= 20; i++)
    {
        if (i % 5 == 0)
            printf("%c", 186);
        if (i % 5 == 1)
            if (numbers[j][k] != 0)
                printf("%3d", numbers[j][k++]);
            else
                printf("%3c", 32, k++);
        if (i % 5 == 2)
            printf("%c", 32);
    }
    j++;
}

void func3()
{
    printf("\n%c", 204);
    for (i = 1; i < 20; i++)
        (i % 5 == 0) ? printf("%c", 206) : printf("%c", 205);
    printf("%c\n", 185);
}

void func4()
{
    printf("\n%c", 200);
    for (i = 1; i < 20; i++)
        (i % 5 == 0) ? printf("%c", 202) : printf("%c", 205);
    printf("%c", 188);
}

void dabba()
{
    func1();
    for (int t = 0; t <= 6; t++)
        (t % 2 == 0) ? func2() : func3();
    func4();
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char move;
    int row;
    int column;
    int key;
    hideCursor();
    system("cls");
    srand(time(NULL));
    generateArray(numbers);

    dabba();

    for (j = 0; j < 4; j++)
    {
        for (k = 0; k < 4; k++)
        {
            if (numbers[j][k] == 0)
            {
                row = j;
                column = k;
            }
        }
    }
    printf("\n(%d,%d) is (row,column) for blank space", row, column);
    while (1)
    {
        j = 0;
        move = getch();
        {
            switch (move)
            {

            case 'w':
            case 'H':
                if (row < 3)
                {
                    swap(&numbers[row][column], &numbers[row + 1][column]);
                    row++;
                }

                break;
            case 's':
            case 'P':
                if (row > 0)
                {
                    swap(&numbers[row][column], &numbers[row - 1][column]);
                    row--;
                }
                break;
            case 'd':
            case 'M':
                if (column > 0)
                {
                    {
                        swap(&numbers[row][column], &numbers[row][column - 1]);
                        column--;
                    }
                }
                break;
            case 'a':
            case 'K':
                if (column < 3)
                {
                    swap(&numbers[row][column], &numbers[row][column + 1]);
                    column++;
                }
                break;
            case 'e':
                system("cls");
                exit(EXIT_SUCCESS);
            }
            // system("cls");

            gotoxy(0, 0);
            dabba();

            int count = 0; // first time if false, reset to 0.
            for (int p = 0; p < 4; p++)
            {
                for (int q = 0; q < 4; q++)
                {
                    if (numbers[p][q] == real_arr[p][q]) // [j][k] not allowed...
                    {
                        count++;
                    }
                }
            }
            if (count == 16)
            {
                printf("\nGood job! The puzzle is solved...");
                return 0;
            }
            fflush(stdout);
        }
    }
}