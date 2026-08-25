#include <stdio.h>
int palindrome(int num)
{
    int rev = 0;
    while (num > 0)
    {
       int mod = num % 10;
       rev = rev *10 + mod;
       num = num / 10;
       
    }
  
    return rev;
}
int main()
{
    int num, pal;
    printf("Enter a number: ");
    scanf("%d", &num);
    pal = palindrome(num);
    if(num == pal) {
        printf("The number: %2d is a palindrome", num);
    } else {
        printf("The number: %2d is not a palindrome", num);
    }

    return 0;
}

