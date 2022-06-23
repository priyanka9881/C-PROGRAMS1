/*
 Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/

#include<stdio.h>

typedef unsigned int UINT;
void Display(UINT ino1);

int main()
{
    UINT iValue1=0,iValue2=0;
    int iret=0;
    printf("enter two no.:\t");
    scanf("%d ",&iValue1);

    Display(iValue1);
   
    return 0;
}

void Display(UINT ino1)
{
    UINT iresult=0;
    UINT imask=0X00000001;
   
   int icnt=0;
  for(icnt=1;icnt<32;icnt++)
   {
       iresult=ino1 & imask;
       if(iresult!=0)
       {
           printf("%d\t",icnt);
       }
       imask=imask<<1;
       
   }
   
}