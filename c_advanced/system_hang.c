#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long count = 0;

    while (1)
    {
        float *ptr = malloc(sizeof(float));

        if (ptr == NULL)
        {
            printf("Failed after %lld allocations\n", count);
            break;
        }

        *ptr = 100.0f;
        count++;

        if (count % 10000000 == 0)
        {
            printf("%lld %p\n", count, (void *)ptr);
            getchar();   // Pause so you can inspect Task Manager
        }
    }
}