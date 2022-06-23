/*
 Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/

#include<stdio.h>

typedef unsigned int UINT;
int CountOne(UINT ino1);

int main()
{
    UINT iValue1=0;
    int iret=0;
    printf("enter two no.:\t");
    scanf("%d ",&iValue1);

    iret=CountOne(iValue1);
    printf("%d",iret);
    return 0;
}

int CountOne(UINT ino1)
{
    UINT iresult=0;
    UINT imask=1;
   
   int icnt=0;
    while (ino1!=0)
    {
        iresult=ino1 & imask;
        if (iresult!=0)
        {
             icnt++;
        }
        ino1=ino1>>1;
    }
    return icnt;
}
 
   
