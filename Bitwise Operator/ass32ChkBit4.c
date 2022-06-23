//Write a program which checks whether 7th & 8th & 9th bit is On or

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT ino)
{
     UINT imask=0X000001C0;
     UINT iresult=0;

     iresult=ino & imask;

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
   UINT ino2=0;
   BOOL bret=FALSE;

   printf("enter any no:\t");
   scanf("%d",&ino2);

   bret=ChkBit(ino2);
   if(bret==TRUE)
   {
       printf("BIT IS ON");
   }
   else
   {
       printf("BIT IS OFF");
   }
   return 0;
}
