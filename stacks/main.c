#include <stdio.h>

int arr[50],top=-1,a=0;

void push(int number);
int pop();

int main()
{
    int elements,number[50],j[50],i,k;
    
    printf("Enter Elements:\n");
    scanf("%d" , &elements);
    
    while(elements>50)
    {
        printf("Stack can hold only less than 50\nrentry:\n");
        scanf("%d", &elements);
    }
    
    for(i=0;i<elements;i++)
    {
        printf("Number %d:", i+1);
        scanf("%d", &number[i]);
        
        push(number[i]);
    }
    
    printf("Items inside Stack\n");    
    
    for(k=0;k<a;k++)
    {
        j[k]=pop();
        printf("%d\n", j[k]);
    }
}
void push(int number)
{ 
    top++;
    arr[top]=number;
    a++;
}
int pop()
{
    int item;    
    
    item=arr[top];
    top--;
    return(item);
}