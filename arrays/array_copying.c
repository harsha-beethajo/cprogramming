#include <stdio.h>
int main()
{
    int original[3] = {7,3,2026};
    int copy[3];
    for (int  i = 0; i < 3; i++)
    {
        copy[i] = original[i];  // original[i] != copy[i], because, when transfering from original to copy, the copy must be equal to original...not vice-versa! 
        
        printf("original = %d\n", original[i]);
        printf("copy = %d\n", copy[i]);
    }
    return 0;
    
}