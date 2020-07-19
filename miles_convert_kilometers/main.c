#include <stdio.h>

void converter(int type,float distance)
{
    float answer;
    
    switch(type)
    {
        case 0:
            answer=0.621371*distance;
            
            printf("Miles:%f\n", answer);
            return;
        case 1:
            answer=1.60934*distance;
            
            printf("Kilometer:%f\n", answer);
            return;
    }
}

int main()
{
    int type;
    float distance;
    
    printf("Press 0 to convert kilometer\n"
           "Press 1 to convert miles\n"
           ":");
    scanf("%d", &type);
    
    switch(type)
    {
        case 0:
            printf("Enter kilometer:\n");
            scanf("%f", &distance);
            
            converter(type,distance);
            break;
        case 1:
            printf("Enter Miles:\n");
            scanf("%f", &distance);
            
            converter(type,distance);
            break;
    }
}