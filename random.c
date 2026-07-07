#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[15];

    // Fill the array with numbers 1 to 15
    for (int i = 0; i < 15; i++) {
        arr[i] = i + 1;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Fisher-Yates shuffle
    for (int i = 14; i > 0; i--) {
        int j = rand() % (i + 1);

        // Swap arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the shuffled numbers
    printf("Shuffled numbers:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}