#include <stdio.h>
int recursionPalindrome(int *arr, int size)
{

    if (size <= 1)
        return 1;
    if (arr[0] != arr[size - 1])
        return 0;
    else
        return recursionPalindrome(arr + 1, size - 2);
}
// int Ispalindrome(int *arr, int SIZE)
// {
//     int count = 0;
//     for (int i = 0; i < SIZE / 2; i++)
//     {
//         if (arr[i] == arr[SIZE - i - 1])
//             count++;
//     }
//     return (count == SIZE / 2) ? 1 : 0;
// }
int main()
{
    int arr[6] = {1, 0, 0, 0, 0, 1};
    // int check = Ispalindrome(arr,5);
    // (check == 1) ? printf("Palindrome") : printf("Not Palindrome");
    int pal = recursionPalindrome(arr, 6);
    (pal == 1) ? printf("Palindrome") : printf("Not Palindrome");
    return 0;
}