#include <stdio.h>

int main(void){

    float BMI;
    float height;
    float weight;
    float foot;

    printf("Your height in foot: ");
    scanf("%f",& foot);

    printf("Your weight in kg: ");
    scanf("%f",& weight);

    height=foot/3.2;

    BMI=weight/(height*height);

    if(BMI <= 18.5) {
        printf("Underweight \n");
    } else if(BMI > 18.5 && BMI<=24.9) {
        printf("Nromal \n");
    } else if(BMI > 24.9 && BMI<=29.9) {
        printf("Owerweight \n"); 
    } else {
        printf("Obesity");
    }
return 0;
}