/*Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlphabate(char c)
{
    if((c>='A') || (c<='Z') || (c>='a') || (c<='z'))
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

    bret=ChkAlphabate(ch);
    if(bret==TRUE)
    {
        printf("It is alphabate");
    }
    else
    {
        printf("It is not alphabate");
    }
    return 0;
}