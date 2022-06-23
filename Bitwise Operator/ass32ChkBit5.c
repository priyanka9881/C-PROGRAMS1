/*Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32.
*/
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT ino)
{
     UINT imask=0X80000001;
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
