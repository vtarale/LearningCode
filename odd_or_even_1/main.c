#include <stdio.h>

int main(void)
{
    int position[30],numbers,i,a=0,b=0;

    printf("Enter number of elements:");
    scanf("%d", &numbers);

    while(numbers>30)
    {
        printf("Please enter numbers again\n");
        printf("Elements:");
        scanf("%d", &numbers);
    }

    printf("Enter numbers\n");

    for(i=0;i<numbers;i++)
    {
        printf("Postion %d:", i+1);
        scanf("%d", &position[i]);

        if(position[i]%2==0)
            a++;
        else
            b++;
    }
    printf("Even numbers:%d\n", a);
    printf("Odd numbers:%d\n", b);
}