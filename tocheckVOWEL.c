#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ long long i=1000000,v=0,co=0;
    char* c=malloc(i*sizeof(char));
     if (c == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("ENTER YOUR TEXT TO CHECK NUMBER OF VOWELS AND CONSONANTS IN IT : ");
    fgets(c,i,stdin);
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]>='A' && c[i]<='Z' || c[i]>='a' && c[i]<='z')
        {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U' )
        {
            v++;
        }
        else
        {
            co++;
        }
        }
    else{}
    }
    printf("AMOUNT OF VOWELS IN YOUR STRING ARE %d and CONSONANTS ARE %d",v,co);
    free(c);
    return 0;
}