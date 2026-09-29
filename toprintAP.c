#include<stdio.h>
int main()
{
    int a,d,n,sum=0,t;
    printf("========================================================\n");
    printf("ENTER first term for your AP : ");
    scanf("%d",&a);
    printf("ENTER common difference for your AP : ");
    scanf("%d",&d);
    printf("ENTER number of terms to be printed for your AP : ");
    scanf("%d",&n);
    printf("========================================================\n");
    int i=1;
    printf("YOUR AP IS : ");
    while(i<=n)
    {
        t=a+(i-1)*d;
        sum=sum+t;
        printf("%d",t);
        if(i==n){}else{printf(", ");}
        i++;
    }
    printf("\n");
    printf("SUM OF YOUR AP IS %d",sum);
}