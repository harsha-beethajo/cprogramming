#include <stdio.h>
char toLower(char letter)
{
    char p = letter - 'A' + 'a';
    if (letter >= 'A' && letter <= 'Z')
        return p;
}
int main()
{
    char L;
    printf("Enter an Upper_case Letter:");
    scanf("%c", &L);
    if (L >= 'A' && L <= 'Z')
        printf("Lower_case = %c", toLower(L));
    else
        printf("Error...try again!");
    return 0;
}
