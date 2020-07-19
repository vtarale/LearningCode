#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("Vihaan.txt", "r");
    if(fp==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        if(islower(ch))
        {
            putchar(toupper(ch));
        }
        else
        {
            putchar(tolower(ch));
        }
    }
}