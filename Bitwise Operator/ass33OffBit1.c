/*1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
*/
#include<stdio.h>

typedef unsigned int UINT;

UINT ChkBit(UINT ino)
{
     UINT imask=0X00000040;
     UINT iresult=0;

    iresult=ino&imask;
    if(iresult==imask)
    {
        iresult=ino ^ imask;
    }
    else
    {
        iresult=ino;
    }
    return iresult;
}
int main()
{
   UINT ino2=0;
   int iret=0;
   printf("enter any no:\t");
   scanf("%d",&ino2);

   iret=ChkBit(ino2);
   printf("%d",iret);
   return 0;
}
