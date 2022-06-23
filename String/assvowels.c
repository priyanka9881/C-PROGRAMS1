#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Vowels(char *str)
{
    int icnt=0;

    if ((str==NULL))
    {
        return -1;
    }
    
    while (*str!='\0')
    {
        if ((*str=='a') || (*str=='e') || (*str=='i') || (*str=='o') || (*str=='u'))
        {
            break;
        }
        str++;
    }
    
    if(*str=='\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iret=0;
    BOOL bret=TRUE;
    char arr[10];

    printf("Enter string:\t");
    scanf("%[^'\n']S",arr);

    bret=Vowels(arr);
    if(bret==TRUE)
    {
        printf("there is vowel ");
    }
    else
    {
        printf("there is no vowel");
    }
    
    return 0;
}