#include<stdio.h>
void StrCopyX(char *src,char *dest)
{

    while (*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';      // *dest=*src;
}

int main()
{
    char arr[10]={'\0'};
    char brr[10]={'\0'};

    printf("Enter string:\t");
    scanf("%[^'\n']s",arr);

    StrCopyX(arr,brr);

    printf("%s",brr);

    return 0;
}