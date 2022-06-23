//Accept character from user and display its ASCII value in decimal,
//octal and hexadecimal format.
//Input : A
//Output : Decimal 65
//         Octal 0101
//         Hexadecimal 0X41

#include<stdio.h>
#include<stdlib.h>

void Display(char ch1)
{

    printf("Decimal : %d\n",ch1);
    printf("Octal : %o\n",ch1);
    printf("Hexadecimal : %x",ch1);

}

int main()
{
    char ch='\0';
    printf("Enter any character:\t");
    scanf("%c",&ch);
    Display(ch);
    return 0;
}