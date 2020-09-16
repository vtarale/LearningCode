#include <stdio.h>
#define MAX_SIZE 9
#define TOTAL_SIZE 18

int getelements(int);
void getdata(int *,int);
void sort(int *,int);
void merge(int *,int *,int *,int,int);
void display(int *,int);

int main()
{
    int e1,e2,e3,arr1[MAX_SIZE],arr2[MAX_SIZE],arr3[TOTAL_SIZE];

    e1 = getelements(1);
    getdata(arr1,e1);

    sort(arr1,e1);

    e2 = getelements(2);
    getdata(arr2,e2);

    e3 = e1 + e2;

    sort(arr2,e2);

    merge(arr1,arr2,arr3,e1,e2);

    printf("After merging both arrays:\n");
    display(arr3,e3);
}

int getelements(int name)
{
    int e;

    do
    {
        printf("Enter elements for arr%d:\n", name);
        scanf("%d", &e);
    }while(e > MAX_SIZE);

    printf("\n\n");

    return(e); 
}

void getdata(int *a,int e)
{
    int value,i;

    for(i = 0;i < e;++i)
    {
        printf("Enter Data %d\n", i+1);
        scanf("%d", &value);

        a[i] = value;
    }

    printf("\n\n");
}

void sort(int *a,int e)
{
    int i,j,v;

    for(i = 0;i < e;++i)
    {
        for(j = i+1;j < e;++j)
        {
            if(a[i] > a[j])
            {
                v = a[i];
                a[i] = a[j];
                a[j] = v;
            }
        }
    }
}

void merge(int *a,int *b,int *c,int e1,int e2)
{
    int p1 = 0,p2 = 0,p3 = 0;

    while(p1 < e1 && p2 < e2)
    {
        if(a[p1] < b[p2])
        {
            c[p3] = a[p1];
            ++p1;
            ++p3;
        }

        else
        {
            if(a[p1] == b[p2])
            {
                c[p3] = a[p1];
                ++p3;
                ++p1;
                c[p3] = b[p2];
                ++p2;
                ++p3;
            }

            else
            {
                if(a[p1] > b[p2])
                {
                    c[p3] = b[p2];
                    ++p3;
                    ++p2;
                }
            }
        }
    }

    while(p1 < e1)
    {
        c[p3] = a[p1];
        ++p1;
        ++p3;
    }

    while(p2 < e2)
    {
        c[p3] = b[p2];
        ++p3;
        ++p2;
    }
}

void display(int *a,int e)
{
    int i;

    for(i = 0;i < e;++i)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\n");
}