/*
Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;
BOOL CommomBit(UINT ino,int ino1,int ino2);

int main()
{
    UINT iValue=0;
    int iValue1=0,iValue2=0;
    BOOL bret=0;
    printf("enter no. and two positions:\t");
    scanf("%d %d %d",&iValue,&iValue1,&iValue2);

    bret=CommomBit(iValue,iValue1,iValue2);
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

/*BOOL CommomBit(UINT ino,int ino1,int ino2)
{
    UINT iresult1=0,iresult2=0;
    UINT imask1=0X00000001;
    UINT imask2=0X00000001;
    
    imask1=imask1<<(ino1-1);
    imask2=imask2<<(ino2-1);
   
    iresult1=ino & imask1;
    iresult2=ino & imask2;
    
    if((iresult1==imask1) && (iresult2==imask2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
*/

BOOL CommomBit(UINT ino,int ino1,int ino2)
{
    int icnt=0;
    UINT imask1=1,imask2=1;
    UINT iresult1=0,iresult2=0;

    while (ino!=0)
    {
        if(iresult1==imask1)
        {
            icnt++;
        }
    }
    
}