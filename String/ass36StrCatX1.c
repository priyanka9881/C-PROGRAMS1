/*
Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.
*/
#include<stdio.h>

void StrCat(char *src,char *dest,int icnt)
{
    if((src==NULL) || (dest==NULL))
    {
        printf("invalid input\n");
        return;
    }
    if(icnt<=0)
    {
        printf("invalid input\n");
        return;
    }
    while (*src!='\0')
    {
        src++;
    }
    *src=' ';
    src++;

    while ((*dest!='\0') && (icnt!=0))
    {
        *src=*dest;
        src++;
        dest++;
        icnt--;
    }  
    *dest='\0';
}

int main()
{
    char arr[30];
    char brr[30];
    int ino=0;

    printf("enter first string:\t");
    scanf("%s",arr);
    getchar();
    printf("enter second string:\t");
    scanf("%[^'\n']s",brr);
    getchar();
    printf("enter value:\t");
    scanf("%d",&ino);

    StrCat(arr,brr,ino);

    printf("modified \"arr\" is %s\n",arr);

    return 0;

}