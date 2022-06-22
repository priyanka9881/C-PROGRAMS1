//write program which accept no. from user and return count of digits in between 3 and 7.
#include<stdio.h>

int diffoddevendigit(int ino)
{
    int digit,diff=0,even=0,odd=0;
    while(ino>0)
    {
        digit=ino%10;
       if(digit%2==0)
       {
        even=even+digit;
       }
       else
       {
        odd=odd+digit;
       }
        ino=ino/10;
    }
    diff=even-odd;
   return diff;
}
int main()
{
    int sum=0,ino=0;
    int bret=0;
    printf("enter any no.");
    scanf("%d",&ino);
    bret=diffoddevendigit(ino);
        printf("%d",bret);

    
    return 0;
}

//op:
//enter any no.2395
//-15
//enter any no.1018
//6
//enter any no.5733
//-18