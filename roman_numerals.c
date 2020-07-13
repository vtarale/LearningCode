#include <stdio.h>

void fucntion(int x);

int main(void)
{
    int number;

    printf("Enter number:");
    scanf("%d", &number);

    fucntion(number);
}
void fucntion(int x)
{
    while(1)
    {
        if(x>=1000)
        {
            printf("M");
            x=x-1000;
        }
        else if(x>=900)
        {
            printf("CM");
            x=x-900;
        }
        else if(x>=500)
        {
            printf("D");
            x=x-500;
        }
        else if(x>=400)
        {
            printf("CD");
            x=x-400;
        }
        else if(x>=100)
        {
            printf("C");
            x=x-100;
        }
        else if(x>=90)
        {
            printf("XC");
            x=x-90;
        }
        else if(x>=50)
        {
            printf("L");
            x=x-50;
        }
        else if(x>=40)
        {
            printf("XL");
            x=x-40;
        }
        else if(x>=10)
        {
            printf("X");
            x=x-10;
        }
        else if(x>=9)
        {
            printf("IX");
            x=x-9;
        }
        else if(x>=5)
        {
            printf("V");
            x=x-5;
        }
        else if(x>=4)
        {
            printf("IV");
            x=x-4;
        }
        else if(x>=1)
        {
            printf("I");
            x=x-1;
        }
        if(x==0)
        {
            printf("\n");
            break;
        }
    }
}