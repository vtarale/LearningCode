#include <stdio.h>
#include <stdlib.h>

struct n
{
    int a;
    int b;
};

void function(int *a, int size, int target, struct n *x) 
{
    int i=0,j;
    x->a=-1;
    x->b=-1;

    while(i<size)
    {
        for(j=i+1;j<size;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]+a[j]==target)
            {
                printf("Position:%d and Position:%d=%d\n", i+1,j+1,target);
                return;
            }
        }
        i++;
    }
    printf("%d and %d\n", x->a,x->b);
}

int main()
{
    struct n s;
    int* numbers;
    int target,i,elements;

    printf("Enter elements:");
    scanf("%d", &elements);

    numbers=(int*)malloc(elements * sizeof(int));

    for(i=0;i<elements;i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("Target:");
    scanf("%d", &target);
    function(numbers,elements,target,&s);
}