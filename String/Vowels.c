#include<stdio.h>

int Vowels(char *str)
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
            icnt++;
        }
        str++;
    }
    
    return icnt;
}

int main()
{
    int iret=0;

    char arr[10];

    printf("Enter string:\t");
    scanf("%[^'\n']S",arr);

    iret=Vowels(arr);
    printf("Frequency of a %d ",iret);

    return 0;
}