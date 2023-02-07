#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <thread>
#include <unistd.h>
using namespace std;
int main(void)
{
    int hours, minutes, seconds, day, month, year;

    time_t now;

    time(&now);

    printf("Hoy %s", ctime(&now));

    struct tm *local = localtime(&now);

    hours = local->tm_hour;
    minutes = local->tm_min;
    seconds = local->tm_sec;

    day = local->tm_mday;
    month = local->tm_mon + 1;
    year = local->tm_year + 1900;

    if (hours < 12)
    {
        printf("Tiempo  %02d:%02d:%02d am\n", hours, minutes, seconds);
    }
    else
    {
        printf("Tiempo %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
    }
    printf("Fecha: %02d/%02d/%d\n", day, month, year);
    int segundos = 0;
    while (1 == 1)
    {
        printf("Segundos:", seconds);
        sleep(seconds);
        segundos++;
    }

    return 0;
}