#include<stdio.h>
int main()
{
    int s=5,x=5;
    for(int i=1;i<=s;i++)
    {
        for(int j=1;j<2*i;j++)
        {
        printf(" ");
        }
        for(int j=1;j<=x;j++)
        {
            printf("%d ",j);
        }
        x--;
        printf("\n");
    }
    return 0;
}