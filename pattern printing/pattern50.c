//Accept no. from user and print below pattern.
//i/p: irow=6  icol=6
//o/p:   
//1  2   3   4   5 
//1  2           5 
//1      3       5 
//1          4   5 
//1  2   3   4   5 

#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol ;j++)
        {
            if((i==j) || (i==irow) || (i==1) || (j==icol) || (j==1))
           {
               printf("%d\t",j);
           }
           
           else
           {
               printf(" \t");
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

