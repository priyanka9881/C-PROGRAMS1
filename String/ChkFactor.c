#include<stdio.h>
#include<stdlib.h>

int Display(char ch,int ino)
{
    int icnt=0;

    for(icnt=0;icnt<ino;icnt++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int ino1=0;
    char ich1=0;
    printf("enter character and number:\t");
    scanf("%c %d",&ich1,&ino1);

    Display(ich1,ino1);

    return 0;
}