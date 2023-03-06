#include <stdio.h>
#include <time.h>

int main()
{
    time_t timer;
    double seconds;

    struct tm y2k = {0};

    y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
    y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;
    
    time(&timer);

    seconds = difftime(timer, mktime(&y2k));

    return 0;
}