#include <stdio.h>

void function(int *a,int *b)
{
    int c;

    c=*a;
    *a=*b;
    *b=c;

    printf("Number 1:%d and Number 2:%d\n", *a,*b);
}
int main()
{
    int n1,n2;

    printf("Enter two numbers\n");
    printf("Number 1:");
    scanf("%d", &n1);
    printf("Number 2:");
    scanf("%d", &n2);

    function(&n1,&n2);
}