#include <stdio.h>
void swapNames(char **name1, char **name2)
{
    char *temp;
    temp = *name1;
    *name1 = *name2;
    *name2 = temp;
}
int main()
{
    char *names[] = {"akshay", "parag", "ramam", "srinivas", "gopal", "rajesh"};
    // temp = names[2];
    // names[2] = names[3];
    // names[3] = temp;
    // printf("%s %s", names[2], names[3]);
    swapNames(&names[2],&names[3]);
    printf("%s %s", names[2], names[3]);
    return 0;
}