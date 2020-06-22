#include <stdio.h>

int main(void){

float c;
float f;

printf("Enter Celusius:");
scanf("%f",& c);

f = (c*9/5)+32;

printf("Answer: %f\n", f);

return 0;
}