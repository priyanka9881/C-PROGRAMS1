//write program which accept no. from user and check whether it contains 0 in it or not.
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL sumdigit(int ino)
{
    int digit,sum;
    while(ino!=0)
    {
        digit=ino%10;
        if(digit==0)
        {
            break;
        }
        ino=ino/10;
    }
    if(digit==0)
    {
        return TRUE;
    }
}
int main()
{
    int sum=0,ino=0;
    BOOL bret=0;
    printf("enter any no.");
    scanf("%d",&ino);
    bret=sumdigit(ino);
    if(bret==TRUE)
    {
        printf("no contains zero");
    }
    else
    {
        printf("no doesnt contain zero");

    }
    return 0;
}

//op:enter any no.258
//no doesnt contain zero
//op:enter any no.8520
//no contains zero
//op:enter any no.205
//no contains zero