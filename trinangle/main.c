#include <stdio.h>

void main()
{
    int l,i,j,k,n;

    printf("Enter length:");
    scanf("%d", &l);
    printf("The width is double of length\n");

    for(i=1;i<l+1;i++)
    {
        for(k=l+1;k>i;k--)
            printf(" ");
        for(j=0;j<i;j++)
            printf("#");
        for(n=0;n<i;n++)
            printf("#");
        printf("\n");
    }
}