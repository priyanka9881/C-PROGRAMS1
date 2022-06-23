#include<stdio.h>
#include<string.h>
void Swap(char *s,char *q)
{
    char temp;

    temp=*s;
    *s=*q;
    *q=temp;
}

int main()
{
    char ch1,ch2;

    printf("enter two alphabets:");
    scanf("%c %c",&ch1,&ch2);

    Swap(ch1,ch2);
    printf("%c %c",ch1,ch2);
    return 0;
}