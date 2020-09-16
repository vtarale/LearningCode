#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node **,int);
void join(struct node **,struct node **);
void sort(struct node *);
void display(struct node *);

void main()
{
    struct node *a;
    struct node *b;

    a = NULL;
    b = NULL;

    insert(&a,3);
    insert(&a,2);
    insert(&a,99);
    insert(&a,33);

    printf("Linked list a:\n");
    display(a);

    printf("\n\n");

    insert(&b,7);
    insert(&b,765);
    insert(&b,1);
    insert(&b,77);
    insert(&b,99);

    printf("Linked list b:\n");
    display(b);

    printf("\n\n");

    join(&a,&b);

    sort(a);

    printf("Linked list after merging:\n");
    display(a);

    printf("\n\n");
}

void insert(struct node **st,int value)
{
    struct node *newnode;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = *st;

    *st = newnode;
}

void join(struct node **ab,struct node **ac)
{
    struct node *temp;

    temp = *ab;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = *ac;

    *ac = NULL;
}

void sort(struct node *st)
{
    struct node *ab;
    struct node *ac;

    ab = st;

    int c;

    while(ab != NULL)
    {
        ac = ab->next;
        
        while(ac != NULL)
        {
            if(ab->data > ac->data)
            {
                c = ab->data;
                ab->data = ac->data;
                ac->data = c;
            }

            ac = ac->next;
        }

        ab = ab->next;
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