#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node **,int);
void sort(struct node *);
void merge(struct node *,struct node *,struct node **);
void display(struct node *);

void main()
{
    struct node *a;
    struct node *b;
    struct node *c;

    a = NULL;
    b = NULL;
    c = NULL;

    insert(&a,3);
    insert(&a,2);
    insert(&a,99);
    insert(&a,33);

    printf("Linked list a:\n");
    display(a);

    printf("\n\n");

    sort(a);

    insert(&b,7);
    insert(&b,765);
    insert(&b,1);
    insert(&b,77);
    insert(&b,99);

    printf("Linked list b:\n");
    display(b);

    printf("\n\n");

    sort(b);

    merge(a,b,&c);

    printf("After merging both Linked list:\n");
    display(c);

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

void merge(struct node *ab,struct node *ac,struct node **ad)
{
    struct node *newnode;
    struct node *extra;
    struct node *temp;

    while(ab != NULL && ac != NULL)
    {
        if(ab->data < ac->data)
        {
            if(*ad == NULL)
            {
                newnode = malloc(sizeof(struct node));
                newnode->data = ab->data;
                newnode->next = NULL;

                *ad = newnode;

                ab = ab->next;
            }

            else
            {
                temp = *ad;

                while(temp->next != NULL)
                {
                    temp = temp->next;
                }

                newnode = malloc(sizeof(struct node));
                newnode->data = ab->data;
                newnode->next = NULL;

                temp->next = newnode;

                ab = ab->next;
            }
        }

        else
        {
            if(ab->data == ac->data)
            {
                if(*ad == NULL)
                {
                    extra = malloc(sizeof(struct node));
                    extra->data = ab->data;
                    extra->next = NULL;

                    newnode = malloc(sizeof(struct node));
                    newnode->data = ac->data;
                    newnode->next = extra;

                    *ad = newnode;

                    ab = ab->next;
                    ac = ac->next;
                }

                else
                {
                    temp = *ad;

                     while(temp->next != NULL)
                    {
                         temp = temp->next;
                    }

                    extra = malloc(sizeof(struct node));
                    extra->data = ab->data;
                    extra->next = NULL;

                    newnode = malloc(sizeof(struct node));
                    newnode->data = ac->data;
                    newnode->next = extra;

                    temp->next = newnode;

                    ab = ab->next;
                    ac = ac->next;
                }
            }

            else
            {
                if(ab->data > ac->data)
                {
                    if(*ad == NULL)
                    {
                        newnode = malloc(sizeof(struct node));
                        newnode->data = ac->data;
                        newnode->next = NULL;

                        *ad = newnode;

                        ac = ac->next;
                    }

                    else
                    {
                        temp = *ad;

                        while(temp->next != NULL)
                        {
                            temp = temp->next;
                        }

                        newnode = malloc(sizeof(struct node));
                        newnode->data = ac->data;
                        newnode->next = NULL;

                        temp->next = newnode;

                        ac = ac->next;
                    }
                }
            }
        }   
    }

    while(ab != NULL)
    {
        temp = *ad;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        newnode = malloc(sizeof(struct node));
        newnode->data = ab->data;
        newnode->next = NULL;

        temp->next = newnode;

        ab = ab->next;
    }

    while(ac != NULL)
    {
        temp = *ad;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        newnode = malloc(sizeof(struct node));
        newnode->data = ac->data;
        newnode->next = NULL;

        temp->next = newnode;

        ac = ac->next;
    }
}

void display(struct node *st)
{
    while(st != NULL)
    {
        printf("%d\t", st->data);
        st = st->next;
    }
}