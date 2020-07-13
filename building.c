#include <stdio.h>

void main()
{
    int w,l,i,j;

    printf("Enter length:");
    scanf("%d", &l);
    printf("Enter width:");
    scanf("%d", &w);

    for(i=0;i<l;i++)
    {
        for(j=0;j<w;j++)
            printf("#");
        printf("\n");
    }
}