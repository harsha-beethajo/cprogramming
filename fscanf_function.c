#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int num;
    fp = fopen("firstfile1.txt", "r");
    if (fp != NULL)
    {
        fscanf(fp,"%d", &num);
        fprintf(stdout,"%d",num); // same as  printf("%d",num);
        fclose(fp);
    }
    return 0;
}

// fscanf(stdin,"%d",num); is same as scanf("%d",&num);
// fprintf(stdout,"%d",num); is same as  printf("%d",num);
// the only fact is, f is used for files, and formatting files.

// whereas general prinf, scanf functions are used for printing and scanning on the console application in vs code...