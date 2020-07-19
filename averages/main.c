#include <stdio.h>
int main(void)
{
    int marks[30],elements,i;
    float sum;

    printf("Enter number of elements:");
    scanf("%d", &elements);

    printf("Enter numbers\n");

    for(i=0;i<elements;i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &marks[i]);

        sum+=marks[i];
    }
    printf("Average:%f\n", sum/(float)elements);
}