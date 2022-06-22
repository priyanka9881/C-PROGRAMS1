//Accept no. from ser and return summasion of digits which is greater than 5
#include<stdio.h>
int Digit(int no)
{
    int digit=0,sum=0;
   if(no==0) 
   {
       return -1;
   }
   if(no<0)
   {
       no=-no;
   }
   while(no!=0)
   {
       digit=no%10;
       if(digit>5)
       {
           sum=sum+digit;
       }
       no=no/10;
   }
   return sum;
}
int main()
{
    int val=0,vall=0;
    printf("enter any no :");
    scanf("%d",&val);
    vall=Digit(val);
    printf("%d",vall);
    return 0;
}

//output=enter any no :581
//                     8