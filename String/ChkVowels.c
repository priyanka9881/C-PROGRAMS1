#include<stdio.h>

int Difference(char *str)
{
    int icnt1=0,icnt2=0;

    if ((str==NULL))
    {
        return -1;
    }
    
    while (*str!='\0')
    {
        if ((*str>='a') && (*str<='z'))
        {
            icnt1++;
        }
        else
        {
            icnt2++;
        }
        str++;
    }
    
    return icnt1-icnt2;
}

int main()
{
    int iret=0;

    char arr[20];

    printf("Enter string:\t");
    scanf("%[^'\n']S",arr);

    iret=Difference(arr);
    printf("Frequency of a %d ",iret);

    return 0;
}