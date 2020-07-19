#include <stdio.h>

int arr[50],rear=-1,front=-1;

void enqueue(int number);
int dequeue();

int main(void)
{
    int i,elements,j[50],number[50],k;
    
    printf("Enter Elements:\n");
    scanf("%d", &elements);
    
    while(elements>50)
    {
        printf("Queue cannot store more than 50\nrentry\n:");
        scanf("%d", &elements);
    }
    
    for(i=0;i<elements;i++)
    {   
        printf("Number %d:", i+1);
        scanf("%d", &number[i]);
        
        enqueue(number[i]);
    }
    
    printf("Numbers in side queue\n");    
    
    for(k=rear;k<front;k++)
    {
        j[k]=dequeue();
        printf("%d\n", j[k]);
    }
}
void enqueue(int number)
{    
    front++;
    arr[front]=number;
}
int dequeue()
{
    int item;

    rear++;
    item=arr[rear];
    return(item);
}
