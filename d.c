/*
 * Author:Vihaan Tarale
 *Breif:Caculates speed with distance and time
 */
#include <stdio.h>

int main(void)
{
    int time;
    int distance;

    printf("Time in minutes:");
    scanf("%d", &time);

    printf("Distance in kilometer:");
    scanf("%d", &distance);

    printf("Speed:%d\n", (distance*60)/time);
}
