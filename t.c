#include <stdio.h>

int main(void)
{
    int num_1;
    int num_2;

    printf("Number1:");
    scanf("%d", &num_1);

    printf("Number2 should be smaller than Number1,Number2:");
    scanf("%d", &num_2);

    printf("Addition:%d\n", num_1+num_2);
    printf("Subtraction:%d\n", num_1-num_2);
    printf("Multiplication:%d\n", num_1*num_2);
    printf("Division:%d\n", num_1/num_2);
    printf("Remainder:%d\n", num_1%num_2);
}