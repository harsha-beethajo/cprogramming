#include <stdio.h>
#include <string.h>
int main()
{
    char *s[] = {"ice", "green", "cone", "please"};
    for (int i = 0; i < 4; i++)
    {
        printf("strlen(%s) = %d\n",s[i],(int)strlen(s[i]));
    }
    
    return 0;
}