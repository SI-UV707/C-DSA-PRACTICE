#include<stdio.h>
int main()
{
    int s=5,x=73;char c;
    for(int i=1;i<=s;i++)
    {
        for(int j=1;j<2*i;j++)
        {
        printf(" ");
        }
        for(int j=65;j<=x;j++)
        {c=j;
            printf("%c ", c);
        }
        x-=2;
        printf("\n");
    }
    return 0;
}