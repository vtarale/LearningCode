#include <stdio.h>

int main(void)
{
    int num;
    int choose;

    printf("Choose type:\n"
           "1:Predesser"
            "2:Sucssesor"
            ":");
    scanf("%d", &choose);

    printf("Number:");
    scanf("%d", &num);

    switch(choose)
    {
        case 1:printf("Predesser:%d\n", num-1);
        break;
        case 2:printf("Sucssesor:%d\n", num+1);
        break;
    }
}