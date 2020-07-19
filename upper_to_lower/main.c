#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[90];
    int l,i;

    puts("Enter string:");
    gets(a);

    l=strlen(a);

    for(i=0;i<l;i++)
    {
        if(islower(a[i]))
        {
            putchar(toupper(a[i]));
        }
        else
        {
            putchar(tolower(a[i]));
        }
        if(i==l-1)
        {
            printf("\n");
        }
    }
}