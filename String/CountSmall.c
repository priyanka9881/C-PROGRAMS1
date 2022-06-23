#include<stdio.h>

int CountSmall(char *str)
{
    int icnt=0;

    if ((str==NULL))
    {
        return -1;
    }
    
    while (*str!='\0')
    {
        if ((*str>='a') && (*str<='z'))
        {
            icnt++;
        }
        str++;
    }
    
    return icnt;
}

int main()
{
    int iret=0;

    char arr[20];

    printf("Enter string:\t");
    scanf("%[^'\n']S",arr);

    iret=CountSmall(arr);
    printf("Frequency of a %d ",iret);

    return 0;
}