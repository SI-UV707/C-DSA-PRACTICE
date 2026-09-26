#include<stdio.h>
int main()
{
   int e=10;
   for(int i=0;i<5;i++)
   {
    for(int j=1;j<=2*i;j++)
    {
        printf(" ");
    }
    for(int j=1;j<e;j++)
    {
        printf("* ");
    }
    e -= 2;
    printf("\n");
   }
   int f=10,b=1;
   for(int i=1;i<6;i++)
   {
    for(int j=8;j>2*i;j--)
    {
        printf(" ");
    }b=((2*i)+1);
     if(b>9)
    {
        return 0;
    }
    for(int j=0;j<b;j++)
    {
        printf("* ");
    }
    printf("\n");
   }
}