//Accept no. from user and print below pattern.
//i/p: irow=3  icol=5
//o/p: 5    4   3   2   1
//     5    4   3   2   1
//     5    4   3   2   1
//     5    4   3   2   1

#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=icol;j>=1;j--)
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
//enter row and column.:3 5
//5       4       3       2       1
//5       4       3       2       1
//5       4       3       2       1
//enter row and column.:6 3
//3       2       1
//3       2       1
//3       2       1
//3       2       1
//3       2       1
//3       2       1