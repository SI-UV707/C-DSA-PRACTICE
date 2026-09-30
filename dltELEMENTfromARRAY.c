#include<stdio.h>
int main()
{
    int n;
    printf("ENTER AMOUNT OF NUMBERS YOU WANT IN YOUR ARRAY : ");
    scanf("%d",&n);
    int arr[n];
    int num;
    printf("ENTER ELEMENTS OF YOUR ARRAY : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("ENTER THE ELEMENTS YOU WANNA DELETE : ");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            x=arr[i+1];
            arr[i]=x;i++;
            for(;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

        }
        else{}
    }
    printf("YOUR ARRAY WITH DELETED ELEMENT IS : ");
    printf("[");
    for(int i=0;i<n-1;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("]");
}