#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void main()
{
    FILE *fp,*ft,*fs;
    char ch;

    fp=fopen("vihaan.txt","r");
    if(fp==NULL)
    {
        printf("Cannot open file");
        fclose(fp);
        exit(1);
    }
    ft=fopen("Write.txt","w+");
    fs=fopen("Copy.txt","w+");

    while(1)
    {
        ch=fgetc(fp);

        if(ch==EOF)
            break;
        else
        {
            if(islower(ch))
                fputc(toupper(ch),ft);
            else
            {
            if(isupper(ch))
                fputc(tolower(ch),ft);
            }
        }
        fputc(ch,fs);
    }
}