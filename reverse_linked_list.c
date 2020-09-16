#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node **,int);
void push(int);
int pop();
void reverse(struct node *);
void display(struct node *);

int p = -1,arr[4];

void main()
{
    struct node *a;

    a = NULL;

    insert(&a,3);
    insert(&a,2);
    insert(&a,99);
    insert(&a,33);

    printf("Linked list:\n");
    display(a);

    printf("\n\n");

    reverse(a);

    printf("Linked list after reversing:\n");
    display(a);

    printf("\n\n");
}

void insert(struct node **st,int value)
{
    struct node *newnode;
    struct node *temp;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    push(value);

    if(*st == NULL)
    {
        *st = newnode;
    }

    else
    {
        temp = *st;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }
}

void push(int v)
{
    p++;
    arr[p] = v;
}

int pop()
{
    int item;

    item = arr[p];
    p--;

    return(item);
}

void reverse(struct node *a)
{
    struct node *temp;

    temp = a;

    int i;

    for(i = 0;i < 4;i++)
    {
        temp->data = pop();
        temp = temp->next;
    }
}

void display(struct node *st)
{
    if(st != NULL)
    {
        printf("%d\t", st->data);
        display(st->next);
    }

    else
    {
        return;
    }
}