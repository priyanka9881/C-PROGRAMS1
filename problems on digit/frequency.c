//write program which accept no. from user and  count frequency of 0 in it .
#include<stdio.h>

int countfrequency(int ino)
{
    int digit,sum,cnt=0;
    while(ino!=0)
    {
        digit=ino%10;
        if(digit==0)
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
    bret=countfrequency(ino);
        printf("%d",bret);

    
    return 0;
}

//op:enter any no.1230
//1

//enter any no.2580000
//4

//enter any no.126647
//0