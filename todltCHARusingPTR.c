#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i=100000000;
    char*c=malloc(i*sizeof(char));
    if (c == NULL) 
    {
        printf("FATAL ERROR: Operating System denied memory allocation.\n");
        return 1; 
    }
    printf("ENTER YOUR STRING : ");
    fgets(c,i,stdin);
    char*a=c;
    char d;
    printf("ENTER THE CHARACTER YOU WANNA DELETE EVERYWHERE FROM YOUR STRING : ");
    scanf("%c",&d);
    int j=d;char x;
    if(d>='a'&&d<='z')
    {
    x=(d-32);
    }
    else if(d>='A' && d<='Z')
    {
        x=(d+32);
    }
    else
    {
        x=d;
    }
    for(int i=0;i<strlen(c);i++)
    {
        if(*a==d || *a==x)
        {
            a++;
        }
        else{printf("%c",*a);a++;}
    }
    free(a);
    return 0;
}