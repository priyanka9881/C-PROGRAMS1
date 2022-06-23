/* Write a program which accept one number and position from user and
toggle that bit. Return modified number.
*/

#include<stdio.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT ino1,int ino2);

int main()
{
    UINT iValue1=0,iValue2=0;
    int iret=0;
    printf("enter two no.:\t");
    scanf("%d %d",&iValue1,&iValue2);

    iret=ToggleBit(iValue1,iValue2);
    if(iret==2)
    {
        printf("position is wrong");
    }
    else
    {
        printf("%d",iret);
    }
    return 0;
}

UINT ToggleBit(UINT ino1,int ino2)
{
    UINT iresult=0;
    UINT imask=0x00000001;
    if((ino2<1) || (ino2>33))
    {
        return 2;
    }

    imask=imask<<(ino2-1);
    iresult=ino1 ^ imask;
    return iresult;
}