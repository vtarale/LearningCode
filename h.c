#include <stdio.h>

int main(void)
{
    int max;
    int min;
    int select;
    int i;
    int num_1;
    int num_2;

    printf("Number1:");
    scanf("%d", &num_1);

    printf("Number2:");
    scanf("%d", &num_2);

      //LCM
            max=(num_1<num_2)?num_2:num_1;
            min=(num_1<num_2)?num_1:num_2;

                for(i=1;i<=max;i++)
                {
                    if((min*i)%max==0)
                    {
                        printf("LCM:%d", min*i);
                        break;
                    }
                }    
 }       