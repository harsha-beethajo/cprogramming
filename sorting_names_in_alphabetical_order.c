#include <stdio.h>
#include <string.h>
int main()
{
    char *names[] = {"santosh","amol","sandy","kishore","rahul","hemanth","durga"};
    char *temp;
    int i,j;
    for (i = 0; i < 7; i++)
    {
        for (j = i+1; j < 7; j++)
        {
            if (strcmp(names[i],names[j]) > 0)
            //if names[i] > names[j], then it return +ve value;
            {                                  
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
            
        }
        
    }
    for (i = 0; i < 7; i++)
    {
        printf("%s\n",names[i]);
    }
    

    return 0;
}