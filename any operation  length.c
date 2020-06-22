/*
 * Author: Vihaan Tarale
 * Breif: Can calulate centimeters to meters,meters to centimeters,meters to kilometers
 *        and kilometers to meters(if metioned)
*/
#include <stdio.h>

int main(void)
{
    float a;
    int type;

    printf("Choose type:\n"
           "1:Centimeters into Meters\n"
           "2:Meters into Cetimeters\n"
           "3:Meters into Kilometers\n"
           "4:Kilometers into Meters\n"
           ":");
    scanf("%d", &type);

    switch(type)
    {
        case 1:printf("Centimeters:");
        scanf("%f", &a);
        printf("Meters:%f\n", a/100);
        break;

        case 2:printf("Meters:");
        scanf("%f", &a);
        printf("Centimeters:%f\n", a*100);
        break;

        case 3:printf("Meters:");
        scanf("%f", &a);
        printf("Kilometers:%f\n", a/1000);
        break;

        case 4:printf("Kilometers:");
        scanf("%f", &a);
        printf("Meters:%f\n", a*1000);
    }
}
