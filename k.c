#include <stdio.h>

int main(void)
{
    int num;
    int i;
    
    printf("Number:");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        
    }

    for(i=1;i<=num/i;i++)
    {
        if (num % i == 0)
            printf("%3d * %3d\n", i, num/i);
    }
}