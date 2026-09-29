#include<stdio.h>
#include<math.h>
int main()
{
    int n,j,k;
    printf("ENTER THE RANGE (starting from 1) UPTO WHICH YOU WANT TO CHECK IF NUMBERS ARE ARMSTRONG OR NOT : ");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        int count=0,sum=0;
        int y=i;
        while(y>0)
        {
            j=y%10;
            y=y/10;
            count++;
        }
        int x=i;
        while(x>0)
        {
            k=x%10;
            x=x/10;
            sum=sum+pow(k,count);
        }
        if(sum==i)
        {
            printf("%d is ARMSTRONG\n",i);
        }
        else{}
        i++;
    }
    return 0;
}