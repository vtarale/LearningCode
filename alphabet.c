#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    ch=getchar();
    if(isalpha(ch))
    {
        puts("Your character is a alphabet");
    }
    else
    {
        puts("Your character is not a alphabet");   
    }
}