#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT ino)
{
     UINT imask=0;
     UINT iresult=0;

     imask=8;

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
