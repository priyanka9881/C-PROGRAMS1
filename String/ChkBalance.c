#include<stdio.h>
#include<stdlib.h>

#define TRUE
#define FALSE

typedef int BOOL;

int main()
{
    char arr[20];
    int iret=0;
    BOOL bret= TRUE;

    printf("Enter string:\t");
    scanf("&[^'\n']S",arr);

    bret=ChkBalance(arr);

    if(bret==TRUE)
    {
        printf("%d",iret);
    }
    else
    {
        printf()
    }
    return 0;
}

BOOL ChkBalance(char *str)
{
    int icnt=0;

    if(*str==NULL)
    {
        return 0;
    }

    while (*str!='\0')
    {
        
    }
    
}