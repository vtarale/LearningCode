#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int);

int main()
{
    int i;
    char clear[] = "clear";
    
    for(i = 0;i < 6;++i)
    {
        system(clear);
        printf("\n\n\n\n\nLoading\n\n");
        delay(300);
        system(clear);
        printf("\n\n\n\n\nLoading.\n\n");
        delay(300);
        system(clear);
        printf("\n\n\n\n\nLoading..\n\n");
        delay(300);
        system(clear);
        printf("\n\n\n\n\nLoading...\n\n");
        delay(300);
    }

    system(clear);

    printf("\n\n");
}

void delay(int seconds)
{
    clock_t start_time;
    int milliseconds;

    milliseconds = 1000*seconds;

    start_time = clock();

    while(clock() < start_time+milliseconds);
}