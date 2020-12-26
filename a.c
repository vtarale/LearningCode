#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float b;
    srand(time(0));
    b = rand() % (150 - 100);
    printf("%f\n", b);
}