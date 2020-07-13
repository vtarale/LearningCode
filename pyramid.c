#include <stdio.h>

void main()
{
    int l,i,j;

    printf("Enter length:");
    scanf("%d", &l);

    for(i=1;i<l+1;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}