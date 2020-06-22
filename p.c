#include <stdio.h>

int main(void)
{
    int num;
    int i;
    int till;

    printf("Number:");
    scanf("%d", &num);

    printf("Till should be more then number,Till:");
    scanf("%d", &till);

    for(i=till;i>num;i--)
    {
        printf("%d\n", i);
    }
}