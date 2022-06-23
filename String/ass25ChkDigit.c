//Accept Character from user and check whether it is digit or not
//(0-9).
//Input : 7
//Output : TRUE
//Input : d
//Output : FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char c)
{
    if((c>='0') && (c<='9'))
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

    bret=ChkDigit(ch);
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