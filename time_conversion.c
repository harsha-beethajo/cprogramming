#include <stdio.h>
int main()
{
    int hours, minutes, seconds, remaining_seconds;
    printf("Enter no. of seconds: ");
    scanf("%d", &seconds);
    
    //    1 hour = 3600 seconds
   //     1 minute = 60 seconds

    hours = seconds/3600;
    minutes = ( seconds % 3600 )/60;
    remaining_seconds = (seconds - 3600*hours) % 60 ;  // 3600 is multiplied with hours, so that if no. of hours is 0, then the 3600*hours term will get eliminated.
    // printf("%d hours %d minutes %d seconds", hours, minutes, remaining_seconds);
    printf("%d:%d:%d ", hours, minutes, remaining_seconds);
    return 0;
}