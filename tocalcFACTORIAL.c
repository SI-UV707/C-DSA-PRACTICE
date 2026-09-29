#include<stdio.h>
int main()
{
    int num,prod=1;
    printf("ENTER RANGE TILL WHICH YOU WANNA CHECK IF NUMBERS ARE ODD/EVEN : ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("FACTORIAL OF YOUR NUMBER IS 1");
    }
    else if(num>0)
    {
        int i=1;
        while(i<=num)
        {
            prod=prod*i;
            i++;
        }
        printf("FACTORIAL OF %d IS %d",num,prod);
        return 0;
    }
    else
    {
        printf("WRONG INPUT");
        return 0;
    }
}