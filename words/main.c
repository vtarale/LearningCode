#include <stdio.h>
#include <string.h>

int main()
{
    char numbers[5000];
    int l,i=0,j;

    puts("Enter one string:");
    gets(numbers);

    l=strlen(numbers);

    for(j=0;j<l;j++)
    {
        if(numbers[j]==' ')
        {
            i++;
        }
    }
    if(i<1)
        printf("There are %d word in the string\n", i+1);
    else
        printf("There are %d words in the string\n", i+1);
}