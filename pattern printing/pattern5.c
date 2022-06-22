//Accept no. from user and print below pattern.
//i/p: 4
//o/p: 1  2   3   4   3   2   1  

#include<stdio.h>
void pattern(ino)
{
    int cnt=0;
    for(cnt=1;cnt<=ino;cnt++)
    {
        printf("%d\t",cnt);
    }
    for(cnt=ino-1;cnt>=1;cnt--)
    {
        printf("%d\t",cnt);
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
//1       2       3       2       1

//enter any no.:2
//1       2       1