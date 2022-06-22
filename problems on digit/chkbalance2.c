//write program which accept no. from user and check whether it is balanced or not using single count.
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkbalance(int ino)
{
    int digit,even=0,odd=0;
    while(ino>0)
    {
        digit=ino%10;
        if(digit%2==0)
        {
           even++;
        }
        else
        {
           odd--;
        }
        ino=ino/10;
      
    }
    if(even==odd)
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
    BOOL bret=0;
    printf("enter any no.");
    scanf("%d",&ino);
    bret=chkbalance(ino);
    if(bret==TRUE)
    {
        printf("it is balance");
    }
    else
    {
        printf("it is not balance");
    }
    
    return 0;
}

//op:
//enter any no.1111
//it is not balance
//enter any no.2211
//it is balance
//enter any no.6677
//it is balance