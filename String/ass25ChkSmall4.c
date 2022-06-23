//Accept Character from user and check whether it is small case or
//not (a-z).
//Input : d
//Output : TRUE
//Input : A
//Output : FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char c)
{
    if((c>='a') && (c<='z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char ch='\0';
    BOOL bret=FALSE;
    printf("enter any single character:\t");
    scanf("%c",&ch);

    bret=ChkSmall(ch);
    if(bret==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}