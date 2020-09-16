#include <stdio.h>
#include <stdlib.h>
#define ARR_MAX 5
#define OP_MAX 4

struct node
{
    int data;
    struct node *next;
};

struct node *arr[5];

void insert(int,int);
void sort(int);
void count(int);
void display(int);

void main()
{
    arr[0] = NULL;
    arr[1] = NULL;
    arr[2] = NULL;
    arr[3] = NULL;
    arr[4] = NULL;

    int t1,t2,v,ch;

    do
    {
        do
        {
            printf("Choose what to do:\n"
                   "Press 1 to insert\n"
                   "Press 2 to sort\n"
                   "Press 3 to count\n"
                   "Press 4 to display\n"
                   "Your choice:");
            scanf("%d", &t1);

        }while(t1 > OP_MAX);

        switch(t1)
        {
            case 1:
                do
                {
                    printf("In which position of array you whant to add node:\n"
                           "Press 1 for position 0\n"
                           "Press 2 for position 1\n"
                           "Press 3 for position 2\n"
                           "Press 4 for position 3\n"
                           "Press 5 for position 4\n"
                           "Your choice:");
                    scanf("%d", &t2);

                }while(t2 > ARR_MAX || t2 < 1);

                printf("Enter value:");
                scanf("%d", &v);

                switch(t2)
                {
                    case 1:
                        insert(0,v);
                        break;
                    case 2:
                        insert(1,v);
                        break;
                    case 3:
                        insert(2,v);
                        break;
                    case 4:
                        insert(3,v);
                        break;
                    case 5:
                        insert(4,v);
                        break;
                }
                break;
            case 2:
                do
                {
                    printf("In which position array you whant to sort\n"
                           "Press 1 for position 0\n"
                           "Press 2 for position 1\n"
                           "Press 3 for position 2\n"
                           "Press 4 for position 3\n"
                           "Press 5 for position 4\n"
                           "Your choice:");
                    scanf("%d", &t2);

                }while(t2 > ARR_MAX || t2 < 1);

                switch(t2)
                {
                    case 1:
                        sort(0);
                        break;
                    case 2:
                        sort(1);
                        break;
                    case 3:
                        sort(2);
                        break;
                    case 4:
                        sort(3);
                        break;
                    case 5:
                        sort(4);
                        break;
                }
                break;
            case 3:
                do
                {
                    printf("In which position array you whant to count\n"
                           "Press 1 for position 0\n"
                           "Press 2 for position 1\n"
                           "Press 3 for position 2\n"
                           "Press 4 for position 3\n"
                           "Press 5 for position 4\n"
                           "Your choice:");
                    scanf("%d", &t2);

                }while(t2 > ARR_MAX || t2 < 1);

                switch(t2)
                {
                    case 1:
                        count(0);
                        break;
                    case 2:
                        count(1);
                        break;
                    case 3:
                        count(2);
                        break;
                    case 4:
                        count(3);
                        break;
                    case 5:
                        count(4);
                        break;
                }
                break;
            case 4:
                do
                {
                    printf("In which position array you whant to display\n"
                           "Press 1 for position 0\n"
                           "Press 2 for position 1\n"
                           "Press 3 for position 2\n"
                           "Press 4 for position 3\n"
                           "Press 5 for position 4\n"
                           "Your choice:");
                    scanf("%d", &t2);

                }while(t2 > ARR_MAX || t2 < 1);

                switch(t2)
                {
                    case 1:
                        display(0);
                        break;
                    case 2:
                        display(1);
                        break;
                    case 3:
                        display(2);
                        break;
                    case 4:
                        display(3);
                        break;
                    case 5:
                        display(4);
                        break;
                }
        }

        printf("Press 1 to countinue:\n");
        scanf("%d", &ch);
        
    }while(ch == 1);
}

void insert(int index,int value)
{
    struct node *newnode;
    struct node *temp;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(arr[index] == NULL)
    {
        arr[index] = newnode;
    }

    else
    {
        temp = arr[index];

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }
}

void sort(int index)
{
    struct node *a;
    struct node *b;

    a = arr[index];

    int c;

    while(a != NULL)
    {
        b = a->next;

        while(b != NULL)
        {
            if(a->data > b->data)
            {
                c = a->data;
                a->data = b->data;
                b->data = c;
            }

            b = b->next;
        }

        a = a->next;
    }
}

void count(int index)
{
    struct node *temp;

    temp = arr[index];

    int c = 0;

    while(temp != NULL)
    {
        temp = temp->next;
        ++c;
    }

    printf("%d\n", c);
}

void display(int index)
{
    struct node *temp;

    temp = arr[index];

    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}