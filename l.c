#include <stdio.h>
 
 int main(void)
 {

     int table;
     int till;
     int i;

     printf("table");
     scanf("%d",& table);

     printf("till where");
     scanf("%d",& till);

     for(i=1;i<=till;i++){
         printf("table %d\n", i*table);
     }
 }