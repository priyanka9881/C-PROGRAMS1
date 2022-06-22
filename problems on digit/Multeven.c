//write program which accept no. from user and reverse the no.
#include<stdio.h>

void MultEven(int ino)
{
    int digit,mult=1;
    while(ino>0)
    {
        digit=ino%10;
        printf("%d",digit);      
        ino=ino/10;
      
    }
    
}
int main()
{
    int ino=0,bret=0;
    printf("enter any no.");
    scanf("%d",&ino);
    MultEven(ino);
   
    
    return 0;
}

//op:
//enter any no.2310
//0132
//enter any no.7000
//0007