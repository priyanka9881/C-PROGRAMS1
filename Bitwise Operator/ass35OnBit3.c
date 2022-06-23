/*
Write a program which accept one number from user and check whether
9th or 12th bit is on or off.
Input : 257
Output : TRUE
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;
BOOL CommomBit(UINT ino);

int main()
{
    UINT iValue=0;
    BOOL bret=0;
    printf("enter no.:\t");
    scanf("%d",&iValue);

    bret=CommomBit(iValue);
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

BOOL CommomBit(UINT ino1)
{
    UINT iresult1=0,iresult2=0;
    UINT imask1=0X00000100;
    UINT imask2=0X00000800;

    iresult1=ino1&imask1;
    iresult2=ino1&imask2;

    if((iresult1==imask1) || (iresult2==imask2))
    {
        return TRUE;
    }
     else
     {
         return FALSE;
     }
}