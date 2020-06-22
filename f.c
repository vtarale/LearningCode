#include <stdio.h>

int main(void)
{
    int num;
    int till;
    int i;

    printf("Number:");
    scanf("%d", &num);

    printf("Till:");
    scanf("%d", &till);
         for(i=num;i<=till;i++)
        {
            printf("%d\n", i);
        }
}