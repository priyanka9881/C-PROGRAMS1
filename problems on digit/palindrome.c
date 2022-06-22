//write program which accept no. from user and check whether it is balanced or not using single count.
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL palindrome(int ino)
{
    int digit,temp=ino,rev=0;
    while(ino>0)
    {
        digit=ino%10;
        rev=(rev*10)+digit;
        ino=ino/10;
    }
    if(temp==rev)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int sum=0,ino=0;
    BOOL bret=FALSE;
    printf("enter any no.");
    scanf("%d",&ino);
    bret=palindrome(ino);
    if(bret==TRUE)
    {
        printf("no. is palindrome");
    }
    else
     {
        printf("no. is not palindrome");
    }
    return 0;
}

//op:
//enter any no.747
//no. is palindrome
//enter any no.1534
//no. is not palindrome
//enter any no.7007
//no. is palindrome