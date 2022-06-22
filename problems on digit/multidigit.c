//write program which accept no. from user and return multiplication of all digits.
#include<stdio.h>

int multidigit(int ino)
{
    int digit,sum,mult=1;
    while(ino>0)
    {
        digit=ino%10;
       if(digit>0)
       {
             mult=mult*digit;
       }
        ino=ino/10;
      
    }
   return mult;
}
int main()
{
    int sum=0,ino=0;
    int bret=0;
    printf("enter any no.");
    scanf("%d",&ino);
    bret=multidigit(ino);
        printf("%d",bret);

    
    return 0;
}

//op:
//enter any no.205
//10
//enter any no.02507
//70
//enter any no.12365
//180