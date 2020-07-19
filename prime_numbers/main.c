#include <stdio.h>

int main(void)
{
    int number,i;

    printf("Enter number:");
    scanf("%d", &number);

    for(i=1;i<number;i++)
    {
        if(number==2)
        {
            printf("Your number is a prime number\n");
            break;
        }
        if(number%(i+1)==0)
        {
            printf("Your number is not a prime number\n");
            break;
        }
        else
        {
            printf("Your number is a prime number\n");
            break;
        }
    }
}