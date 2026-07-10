#include <stdio.h>
int main()
{
    int a = 5;
    int *p;
    p = &a;
    printf("%p\n",p); printf("%p\n",&a);  // these both print the address of 'a'
    printf("%d\n", *p); // this prints the value of 'a'(which is 5).
     return 0;
}