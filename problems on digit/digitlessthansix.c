//write program which accept no. from user and return count of even digits.
#include<stdio.h>

int digitlessthansix(int ino)
{
    int digit,sum,cnt=0;
    while(ino!=0)
    {
        digit=ino%10;
        if(digit<6)
        {
            cnt++;
        }
        ino=ino/10;
      
    }
   return cnt;
}
int main()
{
    int sum=0,ino=0;
    int bret=0;
    printf("enter any no.");
    scanf("%d",&ino);
    bret=digitlessthansix(ino);
        printf("%d",bret);

    
    return 0;
}

//op:enter any no.2541
//4
//enter any no.236987
//2
//enter any no.897678
//0