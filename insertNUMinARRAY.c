#include<stdio.h>
int main()
{
    int n,num,p;
    printf("ENTER AMOUNT OF NUMBERS YOU WANNA ENTER : ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER YOUR NUMBERS : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER YOU WANNA INSERT AND THE POSITION YOU WANNA INSERT AT : \n");
    scanf("%d%d",&num,&p);
    arr[p-1]=num;
    printf("YOUR NEW ARRAY AFTER INSERTION IS : \n[");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]");
    return 0;
}