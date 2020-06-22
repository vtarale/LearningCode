#include <stdio.h>

int main(void)
{
    int num;

    printf("num:");
    scanf("%d",& num);

    if(num%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
}