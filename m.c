#include <stdio.h>

int main(void){
    
    int number;

    printf("Number:");
    scanf("%i", & number);

    for(int i=2;i<number;i++){
        if(number%i==0){
            printf("Not prime\n");
            return 1;
        }
    }

    printf("Prime\n");
    return 0;
}