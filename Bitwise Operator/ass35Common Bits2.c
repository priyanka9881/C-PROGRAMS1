/*
Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/

#include<stdio.h>

typedef unsigned int UINT;
void ToggleBit(UINT ino1);

int main()
{
    UINT iValue1=0,iValue2=0;
    int iret=0;
    printf("enter two no.:\t");
    scanf("%d ",&iValue1);

    ToggleBit(iValue1);
   
    return 0;
}

void ToggleBit(UINT ino1)
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