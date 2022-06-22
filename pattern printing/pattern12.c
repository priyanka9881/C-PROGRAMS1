//Accept no. from user and print below pattern.
//i/p: irow=4  icol=3
//o/p: 1    2   3
//     1    2   3
//     1    2   3
//     1    2   3

#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");

    }    
}
int main()
{
    int ivalue1=0,ivalue2=0;
    printf("enter row and column.:");
    scanf("%d %d",&ivalue1,&ivalue2);
    pattern(ivalue1,ivalue2);
    return 0;
}

//op:
//enter row and column.:4 3
//1       2       3
//1       2       3
//1       2       3
//1       2       3
//enter row and column.:5 6
//1       2       3       4       5       6
//1       2       3       4       5       6
//1       2       3       4       5       6
//1       2       3       4       5       6
//1       2       3       4       5       6