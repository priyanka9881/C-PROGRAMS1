#include<stdio.h>

void ReverseString(char* str);

int main()
{
     char arr[100];
     
     printf("Enter string\n");

     scanf("%[^'\n']s",arr);

     ReverseString(arr);
     
     printf("%s",arr);

     return 0;
}
void ReverseString(char * str)
{
      char* start=NULL;
      char* end=NULL;

      start=end=str;

      while (*end!='\0')
      {
         end++;
      }
      end--;

      while(start<end)
      {
         *start=*start^*end;
         *end=*start^*end;
        *start=*start^*end;

         start++;
         end--;
      }
}