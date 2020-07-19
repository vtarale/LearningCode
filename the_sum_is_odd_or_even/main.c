#include <stdio.h>

int main()
{
    int i,j,elements,numbers[50],odd=0,even=0,sum;
    
    printf("Enter elements:\n");
    scanf("%d", &elements);
    
    printf("Enter numbers\n");
    for(i=0;i<elements;i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &numbers[i]);
    }
    
    for(i=0;i<elements;i++)
    {
        sum=numbers[i];
        for(j=i+1;j<elements;j++)
        {
            sum=sum+numbers[j];   
            
            if(sum%2 == 0)
            {
                even++;
            }
            else 
            {
                odd++;
            }
        }
    }
    
    printf("if you add all the numbers in the subarry from the array,there you get\n"
            "%d odd answers and %d even answers", odd,even);
    printf("\n");
}