#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=10000000;
    int count[256]={0};
    char*c=malloc(i*sizeof(char));
    char* a=c;
    printf("===============================================================\n");
    printf("ENTER YOUR STRING TO CHECK FREQUENCY OF CHARACTERS : \n");
    fgets(c,i,stdin);
    printf("===============================================================\n");
    while(*a!='\0'&&*a!='\n')
    {
        count[*a]++;
        a++;
    }
    for(int i=0;i<256;i++)
    {
        printf("FREQUENCY OF '%c' is %d\n",i,count[i]);
    }
    free(c);
    return 0;
}