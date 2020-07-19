#include <stdio.h>
int main(void)
{
    int minimum,elements,marks[5000],i;

    printf("Enter number of elements:");
    scanf("%d", &elements);

    printf("Enter numbers\n");
    printf("Number 1:");
    scanf("%d", &minimum);

    for(i=1;i<elements;i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &marks[i]);
    }

    for(i=1;i<elements;i++)
    {
        if(minimum>marks[i])
        {
            minimum=marks[i];
        }
    }
    printf("The smallest number:%d\n", minimum);
}