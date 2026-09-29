#include<stdio.h>
#include<math.h>
int main()
{
    int num;float sq;
    printf("ENTER A NUMBER TO CALCULATE IT'S SQUARE ROOT : ");
    scanf("%d",&num);
    if(num>=0)
    {
        sq=sqrt(num);
        printf("SQUARE ROOT OF %d IS %.2f",num,sq);
        return 0;
    }
    else
    {
        printf("CAN'T PROCESS -VE INPUT ~~~~~~_____~~~~~~");
        return 0;
    }
}