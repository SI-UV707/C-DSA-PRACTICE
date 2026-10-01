#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    printf("ENTER YOUR USERNAME : ");
    fgets(c,sizeof(c),stdin);
    for(int i=0;i<20;i++)
    {
        if(c[i] != ' ' && c[i] != '\0')
        {
            printf("%c",c[i]);
        }
        else if(c[i] == '\0'){return 0;}else{}
    }
    return 0;
}