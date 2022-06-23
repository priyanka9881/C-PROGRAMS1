/*1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE
*/
#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iValue1,UINT iValue2)
{
     UINT imask=0X00000001;
     UINT iresult=0;
    imask=imask<<(iValue2-1);
    iresult = iValue1 & imask;
    if(iresult==imask)
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
   UINT ino1=0,ino2=0,iret=0;
   BOOL bret=FALSE;
   printf("enter any no:\t");
   scanf("%d %d",&ino1,&ino2);

   bret=ChkBit(ino1,ino2);
   if(bret==TRUE)
   {   
      printf("TRUE");
   }
   else if(bret==FALSE)
   {
      printf("FALSE");
   }
   else
   {
       printf("position is wrong");
   }
   return 0;
}
