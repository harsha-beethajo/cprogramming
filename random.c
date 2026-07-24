#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandom(int arr2D[4][4])
{

    int arr[16];
    // Fill the array with numbers 1 to 15
    for (int i = 0; i <= 15; i++)
    {
        arr[i] = i + 1;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Fisher-Yates shuffle
    for (int i = 15; i >= 0; i--)
    {
        int j = rand() % (i + 1);

        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the shuffled numbers
    printf("Shuffled numbers:\n");
    for (int i = 0; i < 16; i++)
    {
       
        if (arr[i] == 16)
        {
            arr2D[i / 4][i % 4] = 0;
        }
        else
            arr2D[i / 4][i % 4] = arr[i];
       
            printf("%3d", arr2D[i / 4][i % 4]);

            
    }
}
int main()
{
    int numbers[4][4];

    generateRandom(numbers);
    return 0;
}