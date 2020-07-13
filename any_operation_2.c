#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a,b,i,j,s=0,l= 0,ans=0,buffer_position=0;
    char *temp_ptr = argv[1];
    char buffer[20];

    for(j=0;j<strlen(argv[1]);j++)
    {
        if(argv[1][j] == '+' || argv[1][j] == '-')
        {
            s++;
        }
    }

    for(i=0;i<s;i++)
    {
        for(l=0;l<strlen(temp_ptr);l++)
        {
            if(temp_ptr[l] = '+')
            {
                buffer[buffer_position] = '\0';
                buffer_position = 0;

                a = atoi(buffer);
            }
            else
            {
                buffer[buffer_position] = temp_ptr[i];
                buffer_position++;
            }
        }
    }
    printf("%d\n", a+b);
}