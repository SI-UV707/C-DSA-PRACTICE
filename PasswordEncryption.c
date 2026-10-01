#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i=50;
    char*c=malloc(i*sizeof(char));
    char*a=c;
    printf("ENTER YOUR PASSWORD of 7-15 characters : ");
    fgets(c,i,stdin);
    c[strcspn(c,"\n")]='\0';
    if(strlen(c)<7||strlen(c)>15)
    {
        printf("RECHECK NUMBER OF CHARACTERS!!!");
        free(a);
        return 0;
    }
    else
    {
        while(*c!='\0'&& *c!='\n')
        {
            if(*c>='a'&& *c<='z' || *c>='A'&& *c<='Z' )
            {
                int j=0;
                j=*c;
                printf("%d",j+2);
            }
            else if(*c>='0'&& *c<='9')
            {
                int f=0;
                f=*c-'0';
                printf("%c",'Z'- f);
            }
            else
            {
                printf("%c",*c);
            }
            c++;
        }
    }
    free(a);
}