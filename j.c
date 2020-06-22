#include <stdio.h>

int main(void)
{
    int num_1;
    int num_2;

    printf("Number1:");
    scanf("%d", &num_1);

    printf("Number2:");
    scanf("%d", &num_2);

    if(num_1-num_2>=-1)
    {
        printf("Answer:%d\n", num_1);
    }else if("num_1-num_2<=1")
    {
        printf("Answer:%d\n", num_2);
    }else
    {
        printf("Answer:same");
    } 
}