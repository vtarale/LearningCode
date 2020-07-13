#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch,vowels[10];
    int lines=1,words=1,i;
    
    fp=fopen("wV.txt","r");
    if(fp==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }

    while(1)
    {
        ch=fgetc(fp);

        if(ch==EOF)
            break;
        if(ch==' ')
            words++;
        if(ch=='\n')
            lines++;
    }

    printf("Lines:%d\n", lines);
    printf("Words:%d\n", words);
}