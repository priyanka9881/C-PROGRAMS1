//Accept no. from user and print below pattern.
//i/p: 4
//o/p: 1    2   3   4
//     1    2   3   4
//     1    2   3   4
//     1    2   3   4

#include<stdio.h>
void pattern(ino)
{
    int irow=0,icol=0,cnt=0;
    for(irow=1;irow<=ino;irow++)
    {
        for(icol=1;icol<=ino;icol++)
        {
            printf("%d\t",icol);
        }
        printf("\n");

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
//enter any no.:4
//1       2       3       4
//1       2       3       4
//1       2       3       4
//1       2       3       4
//enter any no.:5
//1       2       3       4       5
//1       2       3       4       5
//1       2       3       4       5
//1       2       3       4       5
//1       2       3       4       5