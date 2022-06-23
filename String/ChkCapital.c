//Accept Character from user and check whether it is alphabet or not
//(A-Z a-z).
//Input : F
//Output : TRUE

#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char c)
{
    if((c>='A') && (c<='Z'))
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
    char ch;
    BOOL bret=FALSE;
    printf("enter any single alphabate:\t");
    scanf("%c",&ch);

    bret=ChkCapital(ch);
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