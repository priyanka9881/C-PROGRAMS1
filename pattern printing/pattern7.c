//Accept no. from user and print below pattern.
//i/p: 5
//o/p: 3   *   6   *   9   *   12   *   15  * 

#include<stdio.h>
void pattern(ino)
{
    int cnt=0;
    for(cnt=1;cnt<=ino;cnt++)
    {
        printf("%d\t",cnt*3);
        printf("*\t");
    }    
}
int main()
{
    int ivalue=0;
    printf("enter any no.:");
    scanf("%d",&ivalue);
    pattern(ivalue);
    return 0;
}

//op:
//enter any no.:5
//3       *       6       *       9       *       12      *       15      *

//enter any no.:3
//3       *       6       *       9       *