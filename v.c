#include <stdio.h>

int main(void)
{
    int num;
    int i;

    printf("Number:");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        if (num % i == 0){
            printf(" %d\n", i);
        }  
    }
}