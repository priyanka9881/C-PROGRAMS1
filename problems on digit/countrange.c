//write program which accept no. from user and return count of digits in between 3 and 7.
#include<stdio.h>

int countrange(int ino)
{
    int digit,sum,cnt=0;
    while(ino!=0)
    {
        digit=ino%10;
        if((3<digit) && (digit<7))
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
    bret=countrange(ino);
        printf("%d",bret);

    
    return 0;
}

//op:
//enter any no.123
//0
//enter any no.589647
//3
//enter any no.456
//3