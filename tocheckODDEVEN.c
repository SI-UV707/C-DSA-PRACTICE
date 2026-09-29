#include<stdio.h>
int main()
{
    int num;
    printf("ENTER RANGE TILL WHICH YOU WANNA CHECK IF NUMBERS ARE ODD/EVEN : ");
    scanf("%d",&num);
    int i=0;
    while(i<=num)
    {
        if(i%2==0)
        {
            printf("%d is EVEN\n",i);
        }
        else
        {
            printf("%d is ODD\n",i);
        }
        i++;
    }
    return 0;
}