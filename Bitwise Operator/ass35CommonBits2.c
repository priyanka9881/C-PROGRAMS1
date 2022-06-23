/*
Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/

#include<stdio.h>

typedef unsigned int UINT;
void CommomBit(UINT ino1,UINT ino2);

int main()
{
    UINT iValue1=0,iValue2=0;
    int iret=0;
    printf("enter two no.:\t");
    scanf("%d %d ",&iValue1,&iValue2);

    CommomBit(iValue1,iValue2);
   
    return 0;
}

void CommomBit(UINT ino1,UINT ino2)
{
    UINT iresult=0,ino=0;
    UINT imask=1;
   
    int icnt=1;
    ino=ino1 & ino2;
    
    
    while (ino!=0)
    {
        iresult=ino & imask;
        if(iresult==imask)
        {
            printf("%d\t",icnt);
        }
        ino=ino>>1;
        icnt++;
    }
}