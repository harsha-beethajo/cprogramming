#include <stdio.h>

int main()
{
    int n;
    int N;
    printf("do you want to find out the summation of n terms?\n");
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    N= (n*(n+1))/2 ;
    printf("Summation of terms = %d", N);
    return 0;
}