#include <stdio.h>

int main(void)
{
    int maximum,elements,marks[30],i,j,a;

    printf("Elements:");
    scanf("%d", &elements);

    while(elements>30)
    {
        printf("Elements should be below 30\n");
        printf("Elements:");
        scanf("%d", &elements);
    }

    printf("Enter numbers\n");
    for(i=0;i<elements;i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &marks[i]);   
    }

    for(i=0;i<elements;i++)
    {
        for(j=i+1;j<elements;j++)
        {
            if(marks[i]>marks[j])
            {
                a=marks[i];
                marks[i]=marks[j];
                marks[j]=a;
            }
        }
    }
    printf("In ascending order below\n");

    for(i=0;i<elements;i++)
        printf("%d\n", marks[i]);
}