#include<stdio.h>
typedef unsigned int UINT;
int CountOne(UINT ino)
{
     int idigit=0;
    int icnt=0;

    while (ino>0)
   {
      idigit=ino%2;
     
       if(idigit==1)
       {
           icnt++;
       }
      ino=ino/2;
   }
   return icnt;
}
int main()
{
   UINT ino2=0;
   int i=0;
   printf("enter any no:\t");
   scanf("%d",&ino2);

   i=CountOne(ino2);
    printf("no. of 1 :%d",i);

   return 0;
}