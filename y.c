//avreges
#include <stdio.h>

int main(void)
{
    //i,n,s=0
    int a[100];
    int i=0;
    int n=0;
    float s=0;
    float av;

    //ask value of n
    printf("Number of scores:");
    scanf("%d", &n);

    //for loop
    for(i=0;i<n;i++)
    {
        //use printf
        printf("Number%d:", i+1);
        scanf("%d", &a[i]);
        //s value
        s+=a[i];
    }
    av=s/n;
    //use printf
    printf("Average:%.2f", av);
    return 0;
}