#include <stdio.h>
char toUpper(char letter)
{
    char p;
    p = letter - 'a' + 'A';
    if (letter >= 'a' && letter <= 'z')
        return p;
}

int main()
{
    char L;
    printf("Enter a Lower_case letter:");
    scanf("%c", &L);
if (L >= 'a' && L <= 'z')
{
    printf("Upper_case = %c", toUpper(L));
}
else
printf("Error...Try again!");
return 0;
}