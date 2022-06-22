//Accept no. from user and print below pattern.
//i/p: irow=4  icol=5
//o/p:   
//1    2    3   4   5   
//6    7    8   9   1
//2    3    4   5   6
//7    8    9   1   2


#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0,k=1;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++,k++)
        {
            if(k==10)
            {
               k=1;
            }
            printf("%d\t",k);
            
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
//enter row and column.:5 4
//1       2       3       4
//5       6       7       8
//9       1       2       3
//4       5       6       7
//8       9       1       2
//enter row and column.:4 3
//1       2       3
//4       5       6
//7       8       9
//1       2       3