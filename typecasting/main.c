#include <stdio.h>
enum
{
    A=1,B
};
int main(void)
{
    int a,type;
    float b;

    printf("Choose type\n"
           "1:Typecast intiger\t"
           "2:Typecast floating value\n"
           "Your desension:");
    scanf("%d", &type);

    switch(type)
    {
        case A:
            printf("Enter intiger:");
            scanf("%d", &a);

            printf("After typecasting:%f\n", (float)a);
            break;
        case B:
            printf("Enter floating value:");
            scanf("%f", &b);

            printf("After typecasting:%d\n", (int)b);
            break;
    }
}