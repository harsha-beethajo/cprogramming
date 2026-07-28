#include <stdio.h>
int main()
{
    int hrs = 2;
    int min = 59;
    int sec = 57;
    system("cls");

    while (1)
    {
        while (hrs < 24)
        {
            while (min <= 59)
            {
                while (sec <= 59)
                {
                    printf("\n=====TIME=====\n");
                        (hrs < 10) ? printf("0%d", hrs) : printf("%2d", hrs);
                        (min < 10) ? printf(":0%d", min) : printf(":%2d", min);
                        (sec < 10) ? printf(":0%d", sec++) : printf(":%d PM", sec++);
                        (hrs < 12) ? printf(" AM") : printf(" PM");
                    }
                    sleep(1);
                    system("cls");
                }
                sec = 0;
                min++;
            }
            min = 0;
            hrs++;
        }
        hrs = 0;
    }
