#include<stdio.h>
typedef unsigned int UINT;
void Display(UINT ino)
{
   int idigit=0;

   while (ino>0)
   {
      idigit=ino%2;
      printf("%d",idigit);
      ino=ino/2;
   }
}
int main()
{
   UINT ino2=0;
   printf("enter any no:\t");
   scanf("%d",&ino2);

   Display(ino2);

   return 0;
}