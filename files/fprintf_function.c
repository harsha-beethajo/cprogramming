#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int num = 5;
    fp = fopen("firstfile.txt", "w");
    if (fp != NULL)
    {
        fprintf(fp,"Number is %d",num);
        fclose(fp);
    }
    return 0;
}
