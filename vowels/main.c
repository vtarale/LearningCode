#include <stdio.h>
#include <string.h>

int main()
{
    char numbers[5000],vowels[10];
    int i,l,j,s=0;

    puts("Enter one string:");
    gets(numbers);

    vowels[0]='a';
    vowels[1]='e';
    vowels[2]='i';
    vowels[3]='o';
    vowels[4]='u';
    vowels[5]='A';
    vowels[6]='E';
    vowels[7]='I';
    vowels[8]='O';
    vowels[9]='U';

    l=strlen(numbers);

    for(i=0;i<l;i++)
    {
        for(j=0;j<5;j++)
        {
            if(numbers[i]==vowels[j])
            {
                s++;
            }
        }
    }

    printf("There are %d vowels\n", s);
}