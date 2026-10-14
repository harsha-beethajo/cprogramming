#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int hrs = 20;
    int min = 59;
    int sec = 57;
    
    while (1)
    {

        while (hrs<24)
        {
            int hours = hrs % 12;
            if (hours == 0)
            {
                hours = 12;
            }
            while (min<=59)
            {
                while (sec<=59)
                {
                    printf("%02d:",hours);
                    (min<10)? printf("%02d:",min) : printf("%2d:",min);
                    (sec<10)? printf("%02d",sec) : printf("%2d",sec);
                    (hrs<12)? printf(" AM\n"): printf(" PM\n");
                    sec++;

                    sleep(1);
                    system("clear");
                }
                sec = 0;
                min++;
            }
            min = 0;
            hrs++;
        }
    hrs = 0;
    }
    return 0;
}