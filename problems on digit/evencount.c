//write program which accept no. from user and return count of even digits.
#include<stdio.h>

int evencount(int ino)
{
    int digit,sum,cnt=0;
    while(ino!=0)
    {
        digit=ino%10;
        if(digit%2==0)
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
    bret=evencount(ino);
        printf("%d",bret);

    
    return 0;
}

//op:enter any no.23658
//3
//enter any no.5697823
//3
//enter any no.15973
//0