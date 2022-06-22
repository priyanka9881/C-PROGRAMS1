//write program which accept no. from user and return count of odd digits.
#include<stdio.h>

int oddcount(int ino)
{
    int digit,sum,cnt=0;
    while(ino!=0)
    {
        digit=ino%10;
        if(digit%2==1)
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
    bret=oddcount(ino);
        printf("%d",bret);

    
    return 0;
}

//op:
//enter any no.123654
//3
//enter any no.123597
//5
//enter any no.002468
//0