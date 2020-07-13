#include <stdio.h>

int main(void)
{
    int till,table,i;

    printf("Which number table:");
    scanf("%d", &table);
    printf("Enter where table stops:");
    scanf("%d", &till);

    for(i=0;i<till;i++)
        printf("Table of %d by %d:%d\n", table,i+1,table*(i+1));
}