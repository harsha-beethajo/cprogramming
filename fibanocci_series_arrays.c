#include <stdio.h>
int main()
{
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);
    int num[length + 1];
    num[0] = 0;
    num[1] = 1;
    for (int i = 0; i < length; i++)
    {

        num[i + 2] = num[i] + num[i + 1];
        printf("%d + %d = %d\n", num[i], num[i + 1], num[i + 2]);
    }
    return 0;
}