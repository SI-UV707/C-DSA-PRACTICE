#include<stdio.h>
int main()
{
    int n;
    printf("ENTER AMOUNT OF NUMBERS YOU WANNA CHECK SIGN OF : ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER YOUR NUMBERS : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p=0,x=0,z=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            p++;
        }
        else if(arr[i]<0)
        {
            x++;
        }
        else
        {
            z++;
        }
    }
    printf("+VE ELEMENTS : %d , -VE ELEMENTS : %d & ZEROS : %d",p,x,z);
}