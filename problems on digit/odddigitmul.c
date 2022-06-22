//Accept no. from user and return multiplication  of odd digits 
#include<stdio.h>
int Digit(int no)
{
    int digit=0,mul=1,i=0,j=0;
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
       else
       {
           i++;
       }
       no=no/10;
       j++;
   }
   if(i==j)
   {
       return 0;
   }
   else
   {
       return mul;
   }
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

//output=enter any no :1
//                     1
// enter any no :0
//               0    
//enter any no :111
//              1
//enter any no :2266
//              0