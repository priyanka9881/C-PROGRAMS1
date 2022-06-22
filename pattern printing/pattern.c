//Accept no. from user and print below pattern.
//i/p: 5
//o/p: 1  2   3   4   5

#include<stdio.h>
void pattern(ino)
{
    int cnt=0;
    for(cnt=0;cnt<=ino;cnt++)
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
//enter any no.:5
//0       1       2       3       4       5