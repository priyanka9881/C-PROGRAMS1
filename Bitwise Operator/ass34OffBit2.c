/*Write a program which accept one number and position from user and off
that bit. Return modified number.
Input : 10 2
Output : 8
*/
#include<stdio.h>
typedef unsigned int UINT;
UINT ChkBit(UINT iValue1,UINT iValue2)
{
     UINT imask=0X00000001;
     UINT iresult=0;
    imask=imask<<(iValue2-1);
    iresult = iValue1 & imask;
    if(iresult==imask)
    {
        iresult=iValue1 ^ imask;
    }
    else
    {
        iresult=iValue1;
    }
    return iresult;
}
int main()
{
   UINT ino1=0,ino2=0;
   UINT iret=0;
   
   printf("enter any no and position:\t");
   scanf("%d %d",&ino1,&ino2);

   iret=ChkBit(ino1,ino2);
  printf("%d",iret);
  
   return 0;
}
