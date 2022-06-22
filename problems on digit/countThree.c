//write program which accept no. from user and count all such digits which are divisible by 3.
#include<stdio.h>

int countThree(int ino)
{
    int digit,sum,cnt=0;
    while(ino>0)
    {
        digit=ino%10;
        if((digit==3) || (digit==6) || (digit==9))
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
    bret=countThree(ino);
        printf("%d",bret);

    
    return 0;
}

//op:
//enter any no.123456
//2
//enter any no.336699
//6
//enter any no.125487
//0