#include <stdio.h>

void main()
{
    int elements,number[50],main_number,i;
    
    printf("Enter elements:\n");
    scanf("%d", &elements);
    
    for(i=0;i<elements;i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &number[i]);
    }
    
    printf("Enter target:\n");
    scanf("%d", &main_number);
    
    for(i=0;i<elements;i++)
    {
        if(number[i] == main_number)
        {
            printf("Position %d\n", i+1);
            return;
        }
    }
    
    printf("Position -1\n");
}