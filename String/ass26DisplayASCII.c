//Write a program which displays ASCII table. Table contains symbol,
//Decimal, Hexadecimal and Octal representation of every member from
//0 to 255.

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int icnt=0;

    for(icnt=1;icnt<=255;icnt++)
    {
        printf("%c %d %o %x\n",icnt,icnt,icnt,icnt);
    }
}

int main()
{
    DisplayASCII();
    
    return 0;
}