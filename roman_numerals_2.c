#include <stdio.h>
#include <string.h>

int function(char c)
{
    int v=0;

    switch(c)
    {
        case 'I':
            v=1;
            break;
        case 'V':
            v=5;
            break;
        case 'X':
            v=10;
            break;
        case 'L':
            v=50;
            break;
        case 'C':
            v=100;
            break;
        case 'D':
            v=500;
            break;
        case 'M':
            v=1000;
            break;
    }
        return (v);
}
int main()
{
    char rm[500];
    int i,l,r=0,j[5000],a;

    printf("Enter roman numeral:");
    scanf("%s", rm);

    l=strlen(rm);

    for(i=0;i<l;i++)
    {
        j[i]=function(rm[i]);
    }    
        for(i=0;i<l;i++)
        {
            if(j[i]>=j[i+1])
            {
                r=r+j[i];
            }
            else
            {
                if(j[i]<j[i+1])
                    r=r+(j[i+1]-j[i]);
                    i++;
            }
        }   
    printf("%d\n", r);  
}