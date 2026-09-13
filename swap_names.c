#include <stdio.h>
#include <string.h>
void swapNames(char **a, char **b)
{
    char *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    /*  char name[2][20] = {"ajay", "rishik"};
        char temp[20];
        printf("%s %s\n", name[0], name[1]);
        strcpy(temp, name[0]);
        strcpy(name[0], name[1]);
        strcpy(name[1], temp);
        printf("%s %s\n", name[0], name[1]);  */

    char *name[] = {"ajay", "rishik"};
    printf("names before: %s<--->%s\n", name[0], name[1]);
    swapNames(&name[0], &name[1]);
    printf("names after: %s<--->%s\n", name[0], name[1]);
    return 0;
}
