/*
Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).
*/
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
#define ERROR -1

BOOL StrCmpX(char *src,char *dest)
{
    if((src==NULL) || (dest==NULL))
    {
        return ERROR;
    }
    
    while ((*src!='\0') && (*dest!='\0'))
    {
        if(*src!=*dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if(*src!=*dest)
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
    char arr[30];
    char brr[30];
    BOOL bret=FALSE;

    printf("enter first string:\t");
    scanf("%s",arr);
    getchar();
    printf("enter second string:\t");
    scanf("%[^'\n']s",brr);
    getchar();
    
    bret=StrCmpX(arr,brr);

    if(bret==TRUE)
    {
        printf("TRUE");
    }
    else if (bret==ERROR)
    {
        printf("invalid Inout");
    }
    else
    {
        printf("FALSE");
    }
    return 0;

}