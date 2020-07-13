#include <stdio.h>

enum
{
    Addition=1,Subtraction,Multiplication,Division
};

void main(void)
{
    int elements,marks[30],type,i;
    float a;

    printf("Choose operation\n"
           "1:Addition\t"
           "2:Subtraction\n"
           "3:Multiplication\t"
           "4:Division\n"
           "Your desension:");
    scanf("%d", &type);

    while(type>4)
    {
        if(type>4)
        {
            printf("You can only enter 1 for addition,2 for subtraction,3 for multiplication and 4 for division");
             printf("Please choose operation again\n");
            printf("1:Addition\t"
                   "2:Subtraction\n"
                   "3:Multiplication\t"
                   "4:Division\n"
                   "Your desension:");
            scanf("%d", &type);
        }
    }

    printf("Enter elements:");
    scanf("%d", &elements);

    while(elements>30)
    {
        printf("Elements below 30\n");
        printf("Elements:");
        scanf("%d", &elements);
    }

    printf("Enter numbers\n");
    for(i=0;i<elements;i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &marks[i]);
    }

    a=marks[0];

    switch(type)
    {
        case Addition:
            for(i=1;i<elements;i++)
                a+=marks[i];
            printf("Answer:%f", a);
            break;
        case Subtraction:
            for(i=1;i<elements;i++)
                a-=marks[i];
            printf("Answer:%f", a);
            break;
        case Multiplication:
            for(i=1;i<elements;i++)
                a*=marks[i];
            printf("Answer:%f", a);
            break;
        case Division:
            for(i=1;i<elements;i++)
                a/=marks[i];
            printf("Answer:%f", a);
            break;
    }
}