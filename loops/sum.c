#include <stdio.h>
int main()
{
    int sumof2numbers(int, int);

    int a;
    int b;
    pm();
    // printf("Enter a & b ");
    // scanf(" %d %d", &a, &b);
    printf("sum of a & b is = %d\n", sumof2numbers(3, 4));
    printf("sum of a & b is = %d\n", sumof2numbers(4, 5));
    printf("sum of a & b is = %d\n", sumof2numbers(6, 5));
    printf("sum of a & b is = %d\n", multiply(6, 5));
    printf("sum of a & b is = %d\n", sub(6, 5));


    return 0;
}

// funcion deinitin
int sumof2numbers(int n1, int n2)
{
    int s = n1 + n2;
    return s;
}

int multiply(int n1, int n2)
{
    return  n1 * n2;
}

int sub(int n1, int n2)
{
    return  n1 - n2;
}

void pm() {

    printf("Welcome !\n");
}