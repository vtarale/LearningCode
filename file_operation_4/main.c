#include <stdio.h>

int main()
{
    struct data
    {
        char name[50];
        char post[50];
        float salary;
    };
    
    struct data e;
    FILE *fp;
    
    fp=fopen("data.txt","a");
    
    while(1)
    {
        printf("Enter name,salary,post:\n");
        scanf("%s %f %s", &e.name,&e.salary,&e.post);
        
        fprintf(fp,"%s %f %s\n", e.name,e.salary,e.post);
        
        fflush(stdin);
        
        break;
    }
    
    fclose(fp);
}