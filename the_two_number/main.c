#include <stdio.h>

int main()
{
    int numbers[50],i,j,elements,maximum=0,n;
    
    printf("$Enter elements\n$");
    scanf("%d", &elements);
    
    while(elements>50)
    {
        printf("$Elements should be below 50\n");
        printf("$Elements\n$");
        scanf("%d", elements);
    }
    
    printf("$Enter numbers\n");
    
    for(i=0;i<elements;i++)
    {
        printf("$Number %d:", i+1);
        scanf("%d", &numbers[i]);
    }
    
    for(i=0;i<elements;i++)
    {
        n=numbers[i];
        for(j=i+1;j<=elements;j++)
        {
            n=n*numbers[j];
            
            if(n>maximum)
            {
                maximum=n;
            }
        }
    }
    printf("$%d\n", maximum);
}