//write program which accept no. from user and check whether it is balanced or not using single count.
#include<stdio.h>

void ReverseX(int ino)
{
    int digit,cnt=0,even=0,odd=0;
    while(ino>0)
    {
        digit=ino%10;
        if(digit%2==0)
        {
           even=(even*10)+digit;
        }
        else
        {
           odd=(odd*10)+digit;
        }
        ino=ino/10;
    }
    printf("%d %d",even,odd);
}
int main()
{
    int sum=0,ino=0;
    printf("enter any no.");
    scanf("%d",&ino);
    ReverseX(ino);
   
    return 0;
}

//op:
//enter any no.3759
//0       9573
//enter any no.4682
//2864    0
//enter any no.8370
//8       73