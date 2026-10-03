#include<stdio.h>
int main()
{
    int n;
    printf("=================================================\n");
    printf("ENTER THE ORDER OF MATRIX YOU WANT TO HAVE : ");
    scanf("%d",&n);
    int c[n][n];
    printf("ENTER ELEMENTS OF YOUR MATRIX : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    printf("=================================================\n");
    printf("YOUR ENTERED MATRIX IS : \t\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}