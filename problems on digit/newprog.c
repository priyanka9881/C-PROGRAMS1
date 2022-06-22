#include <stdio.h>
int Display(var1)
{
    int var,i;
    /* Iterate from 1 to num */
    for(i=1; i<=(var1; i++)
    {
        /* 
         * If num is exactly divisible by i
         * Then i is a factor of num
         */
        if(var1 % i == 0)
        {
              var=var*i;        
        }
    }
    return var;
}

int main()
{
    int num1,num2;

    /* Input number from user */
    printf("Enter any number to find its factor: ");
    scanf("%d", &num1);

    num2=Display(num1);
    printf("%d \n", &num2);
    return 0;
}