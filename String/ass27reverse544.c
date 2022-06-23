//Write a program which accept string from user and display it inn
//reverse order.

//Input : “MarvellouS”

//Output : “SuollevraM”

#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{

    char temp;
    char *s=NULL;
    char *e=NULL;
    char e=str,s=str;

    while (*e!='\0')
    {
        e++;
    }
    e--;
    while (s<=e)
    {
        temp=*s;
        *s=*e;
        *e=temp;
        e--;
        s++;
    }
}

int main()
{
     char arr[100];
     
     printf("Enter string\n");

     scanf("%[^'\n']s",arr);

     Reverse(arr);
     
     printf("%s",arr);

     return 0;
}