//Accept character from user. If character is small display its
//corresponding capital character, and if it small then display its
//corresponding capital. In other cases display as it is.
//Input : Q
//Output : q
//Input : m
//Output : M
//Input : 4
//Output : 4
//Input : %
//Output : %

#include<stdio.h>
#include<stdlib.h>

void Display(char ch1)
{
    if((ch1>='A') && (ch1<='Z'))
    {
        ch1=ch1+32;
        printf("%c",ch1);
    }
    if((ch1>='a') && (ch1<='z'))
    {
        ch1=ch1-32;
        printf("%c",ch1);
    }
    else
    {
        printf("%c",ch1);
    }
}

int main()
{
    char ch='\0';
    printf("Enter any character:\t");
    scanf("%c",&ch);
    Display(ch);
    
    return 0;
}