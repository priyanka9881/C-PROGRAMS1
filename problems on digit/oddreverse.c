//write program which accept no. from user and return no which is only contain its odd digits .
#include<stdio.h>

int oddreverse(int ino)
{
    int digit=0,rev=0;
    while(ino>0)
    {
        digit=ino%10;
        if(digit%2==1)
        {
             rev=(rev*10)+digit;
        }
        ino=ino/10;
    }
    return rev;
}
int main()
{
    int ino=0,bret=0;
    printf("enter any no.");
    scanf("%d",&ino);
    bret=oddreverse(ino);
    printf("%d",bret);
    
    return 0;
}

//op:
//enter any no.258963
//395
//enter any no.12345
//531
//enter any no.2135
//531