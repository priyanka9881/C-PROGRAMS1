//Accept no. from user and return multiplication  of odd digits 
#include<stdio.h>
int Digit(int no)
{
    int digit=0,mul=1,i=0;
   if(no==0) 
   {
       return 0;
   }
   if(no==1)
   {
       return mul=1;
   }
   if(no<0)
   {
       no=-no;
   }
   while(no!=0)
   {
       digit=no%10;
       if(digit%2==1)
       {       
           mul=mul*digit;
       }
       no=no/10;
       
   }
   if(mul==1)
   {
       mul=0;
   }
   return mul;
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