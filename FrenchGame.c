#include <stdio.h>
#include <string.h>

int main()
{
    int d, y;
    char c[4];
    
    // 1. The Sandbox Buffer
    char input_buffer[100]; 
    
    printf("ENTER YOUR DOB (eg : 23JAN2004) : ");
    
    // 2. Clear the hardware stream and lock it in memory
    if (fgets(input_buffer, sizeof(input_buffer), stdin) == NULL) {
        printf("FATAL ERROR: Failed to read input.\n");
        return 1;
    }
    
    // 3. The Interrogation
    char garbage;
    // We expect EXACTLY 3 assignments.
    // If it finds a 4th character (garbage), the input is too long.
    int variables_filled = sscanf(input_buffer, "%2d%3s%4d %c", &d, c, &y, &garbage);
    
    // 4. The Execution Check
    if (variables_filled != 3) 
    {
        printf("INPUT ERROR: Invalid format, random characters, or string too long.\n");
        printf("Execution halted.\n");
        return 1; // Immediately kill the program
    }
    
    // 5. Length Validation for the parsed strings
    // (In case they typed 1JAN2004 instead of 01JAN2004)
    if (d < 1 || d > 31 || strlen(c) != 3 || y < 1000 || y > 9999) 
    {
        printf("INPUT ERROR: Data fails length/boundary validation.\n");
        return 1;
    }
    char*a=c;
    int count=0;
    while(*a!='\0')
    {
        if(*a>='A' && *a<='Z' && *a!='A' && *a!='E'  && *a!='I' && *a!='O' && *a!='U')
        {
            count++;
        }
        else{};
        a++;
    }
    int j,e;
    int x=d,z=y,s1=0,s2=0;
    while(x>0 || z>0)
    {
        j=x%10;
        x=x/10;
        e=z%10;
        z=z/10;
        if(j%2 != 0)
        {
            s1=s1+j;
        }
        else{}
        if(e%2 != 0)
        {
            s2=s2+e;
        }
        else{}
    }
    int num,k;
    printf("ENTER A RANDOM NUMBER : ");
    scanf("%d",&num);
    k=s1+s2+count;
    if(k==num)
    {
        printf("WINNER");
    }
    else
    {
        printf("LOSER");
    }
    return 0;
}