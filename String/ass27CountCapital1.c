//Write a program which accept string from user and count number of
//capital characters.

//Input : “Marvellous Multi OS”

//Output : 4

#include<stdio.h>

int CountCapital(char *str)
{
    int icnt=0;

    if ((str==NULL))
    {
        return -1;
    }
    
    while (*str!='\0')
    {
        if ((*str>='A') && (*str<='Z'))
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

    iret=CountCapital(arr);
    printf("Frequency of a %d ",iret);

    return 0;
}