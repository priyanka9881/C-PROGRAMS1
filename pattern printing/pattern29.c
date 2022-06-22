//Accept no. from user and print below pattern.
//i/p: irow=4  icol=5
//o/p:   
//1    3    5   7   9
//2    4    6   8   10
//1    3    5   7   9
//2    4    6   8   10


#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0,k=1;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if((i%2)==1)
            {
               printf("%d\t",(j*2)-1);
            }
            else
            {
                printf("%d\t",j*2);
            }
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
//enter row and column.:5 5
//1       3       5       7       9
//2       4       6       8       10
//1       3       5       7       9
//2       4       6       8       10
//1       3       5       7       9
//enter row and column.:3 3
//1       3       5
//2       4       6
//1       3       5