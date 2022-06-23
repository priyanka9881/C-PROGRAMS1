/*Write a program which accept one number from user and off 7th and 10th
bit of that number. Return modified number.
*/
#include<stdio.h>

typedef unsigned int UINT;

UINT ChkBit(UINT ino)
{
     UINT imask=0X00000240;
     UINT iresult=0;

    iresult=ino&imask;
    if(iresult==imask)
    {
        iresult=ino ^ imask;
        
    }
    else
    {
        iresult=ino | imask;
    }
    return iresult;
}
int main()
{
   UINT ino2=0,iret=0;
   printf("enter any no:\t");
   scanf("%d",&ino2);

   iret=ChkBit(ino2);
   printf("%d",iret);
   return 0;
}
