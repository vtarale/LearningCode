#include <stdio.h>

char arr[100];
int top=-1,a=0;

void push(char character);
char pop();

int main()
{
    int i,k;
    char string;
    
    do
    {
        top=-1;
        a=0;
        i=0;
        
        printf("Enter string\n");
        string = getchar();
        
        while(string != '\n')
        {
            push(string);
            i++;
            
            string=getchar();
        }
    }while(i>100);
    
    for(k=0;k<a;k++)
    {
        printf("%c", pop());
    }
    
    printf("\n");
}
void push(char character)
{    
    top++;
    arr[top]=character;
    a++;
}
char pop()
{
    char item;
    item=arr[top];
    top--;
    
    return(item);
}