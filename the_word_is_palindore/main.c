#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j,a=0;
    char s[200000];

    printf("Enter a word:");
    scanf("%s", s);

    while(i<strlen(s)/2)
    {
        for(j=strlen(s)/2;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {
                a++;
            }
        }
        i++;
    }
    if(a == strlen(s)/2)
    {
        printf("Word is palindrone\n");
    }
    else
    {
        printf("The word is not palidrone\n");
    }
}