#include <stdio.h>
int main()
{
    int seconds, minutes, hours, remaining_seconds;
    printf("Enter the seconds:");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds - hours * 3600) / 60;
    remaining_seconds = (seconds - 3600 * hours) % 60;
    if (hours < 10 && minutes < 10)
    {
        if (remaining_seconds >= 10)
            printf("the converted value is 0%d:0%d:%d", hours, minutes, remaining_seconds);
        else
            (remaining_seconds < 10),
                printf("the converted value is 0%d:0%d:0%d", hours, minutes, remaining_seconds);
    }
    else if (hours < 10 && minutes >= 10)
    {
        if (remaining_seconds >= 10)
            printf("the converted value is 0%d:%d:%d", hours, minutes, remaining_seconds);
        else
            (remaining_seconds < 10),
                printf("the converted value is 0%d:%d:0%d", hours, minutes, remaining_seconds);
    }
    else if (hours >= 10 && minutes >= 10)
    {
        if (remaining_seconds >= 10)
            printf("the converted value is %d:%d:%d", hours, minutes, remaining_seconds);
        else
            (remaining_seconds < 10),
                printf("the converted value is %d:%d:0%d", hours, minutes, remaining_seconds);
    }
    else if (hours > 10 && minutes < 10)
    {
        if (remaining_seconds < 10)
            printf("the converted value is %d:0%d:0%d", hours, minutes, remaining_seconds);
        else if (hours > 10 && minutes > 10)
        {
            printf("the converted value is %d:%d:0%d", hours, minutes, remaining_seconds);
        }
        else
            (remaining_seconds >= 10),
                printf("the converted value is %d:%d:%d", hours, minutes, remaining_seconds);
    }
    else
        printf("the converted value is %d:%d:%d", hours, minutes, remaining_seconds);
    return 0;
}
