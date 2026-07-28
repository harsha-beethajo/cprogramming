#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    long long count = 0;

    while (1)
    {
        char *ptr = malloc(1024 * 1024); // 1 MB

        if (ptr == NULL)
        {
            printf("Failed after %lld MB\n", count);
            break;
        }

        // Touch every page so Windows commits it.
        for (int i = 0; i < 1024 * 1024; i += 4096)
        {
            ptr[i] = 1;
        }
        //

        count++;

        if (count % 100 == 0)
        {
            sleep(1);
            printf("%lld MB allocated\n", count);
        }
    }
}