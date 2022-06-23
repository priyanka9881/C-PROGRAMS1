//Accept character from user. If it is capital then display all the
//characters from the input characters till Z. If input character is small
//then print all the characters in reverse order till a. In other cases
//return directly.
//Input : Q
//Output : Q R S T U V W X Y Z
//Input : m
//Output : m l k j i h g f e d c b a
//Input : 8

#include<stdio.h>
#include<stdlib.h>

void Display(char ch1)
{

    if((ch1>='A') && (ch1<='Z'))
    {
        for(   ;ch1<='Z';ch1++)
        {
            printf("%c\t",ch1);
        }
    }
    if((ch1>='a') && (ch1<='z'))
    {
        for(   ;ch1>='a';ch1--)
        {
            printf("%c\t",ch1);
        }
    }
    else
    {
        printf(" ");
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