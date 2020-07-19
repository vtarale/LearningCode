#include <stdio.h>

int main(void)
{
    int number_1,number_2,minimum;

    printf("Number 1:");
    scanf("%d", &number_1);
    printf("Number 2:");
    scanf("%d", &number_2);

    if(number_1>number_2)
        minimum=number_2;
    else
        minimum=number_1;
    
    while(1)
    {
        if(minimum%number_1==0 && minimum%number_2==0)
        {
            printf("LCM:%d\n", minimum);
            break;
        }
        minimum++;
    }
}