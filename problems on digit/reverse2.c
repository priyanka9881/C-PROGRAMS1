//write program which accept no. from user and returnits reverse no.
#include<stdio.h>

int reverse(int ino)
{
    int digit=0,rev=0;
    while(ino>0)
    {
        digit=ino%10;
        rev=(rev*10)+digit;
        ino=ino/10;
      
    }
    return rev;
}
int main()
{
    int ino=0,bret=0;
    printf("enter any no.");
    scanf("%d",&ino);
    bret=reverse(ino);
    printf("%d",bret);
    
    return 0;
}

//op:
//enter any no.753
//357
//enter any no.2310
//132
//enter any no.7000
//7