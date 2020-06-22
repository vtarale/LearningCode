/*
   *Author:Vihaan Tarale
   *Breif:Can calucalate hours to minutes,minutes to hours,seconds to minutes and minutes
          *to seconds(if metioned)
*/
#include <stdio.h>

int main(void)
{
   int type;
   float a;

   printf("Choose type:\n"
          "1:Hours into Minutes\n"
          "2:Minutes into Hours\n"
          "3:Seconds into Minutes\n"
          "4:Minutes into Seconds\n"
          ":");
   scanf("%d", &type);

   switch(type)
   {
      case 1:printf("Hours:");
      scanf("%f", &a);
      printf("Minutes:%f\n", a*60);
      break;

      case 2:printf("Minutes:");
      scanf("%f", &a);
      printf("Hours:%f\n", a/60);
      break;

      case 3:printf("Seconds:");
      scanf("%f", &a);
      printf("Minutes:%f\n", a/60);
      break;

      case 4:printf("Minutes:");
      scanf("%f", &a);
      printf("Seconds:%f\n", a*60);
      break;

   }   
}
