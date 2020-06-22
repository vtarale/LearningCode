#include <stdio.h>

int main(void)
{
    int amount;
    int n_amount;
    int notes;

    printf("amount:");
    scanf("%d",& amount);

    printf("n_amount:");
    scanf("%d",& n_amount);

    notes=amount/n_amount;

    printf("notes:%d\n", notes);
}