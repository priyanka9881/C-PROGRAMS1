/*
Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
*/

#include<stdio.h>

typedef unsigned int UINT;
UINT ToggleBitRange(UINT ino,int istart,int iend);

int main()
{
    UINT iValue=0;
    UINT iret=0;
    int iValue1=0,iValue2=0;
    printf("enter no.:\t");
    scanf("%d",&iValue);

    iret=ToggleBitRange(iValue,iValue1,iValue2);
    printf("%d",iret);
    return 0;
}

UINT ToggleBitRange(UINT ino1,int istart,int iend)
{
    UINT iresult=0;
    UINT imask1=0;
    UINT imask2=0,imask=0;

    if((istart>iend) || (istart<1) || (iend>32) || (iend<1))
    {
        return ino1;
    }
    imask1=0XFFFFFFFF;
    imask2=0XFFFFFFFF;
    imask1=imask1<<(istart-1);
    imask2=imask2>>(32-(iend));

    imask=imask1 & imask2;
    iresult=ino1 ^ imask;
    return iresult;
}