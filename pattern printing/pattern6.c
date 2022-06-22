//Accept no. from user and print below pattern.
//i/p: 4
//o/p: 4    *   3   *   2   *   1   *   2   *   3   *   4   *   

#include<stdio.h>
void pattern(ino)
{
    int cnt=0;
    for(cnt=ino;cnt>=1;cnt--)
    {
        printf("%d\t",cnt);
        printf("*\t");
    }
    for(cnt=2;cnt<=ino;cnt++)  
        {
            printf("%d\t",cnt);
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
//enter any no.:3
//3       *       2       *       1       *       2       *       3       *

//enter any no.:4
//4       *       3       *       2       *       1       *       2       *       3       *       4       *