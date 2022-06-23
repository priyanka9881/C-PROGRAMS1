//Accept character from user and display its ASCII value in decimal,
//octal and hexadecimal format.
//Input : A
//Output : Decimal 65
//         Octal 0101
//         Hexadecimal 0X41

#include<stdio.h>
#include<stdlib.h>

 ChkSpecial(char ch1)
{

    if((ch1=='!') || (ch1=='@') || (ch1=='#') || (ch1=='$') || (ch1=='%') || (ch1=='^') || (ch1=='&') || (ch1=='*'))
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
    char ch='\0';
    BOOL bret=TRUE;
    printf("Enter any character:\t");
    scanf("%c",&ch);
    bret=ChkSpecial(ch);
    if(bret==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    return 0;
}