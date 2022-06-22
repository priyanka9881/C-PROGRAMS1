//Accept no. from user and print below pattern.
//i/p: irow=4  icol=4
//o/p:   
//*  *   *   *
//*  *   *
//*  *
//*

#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=icol;j>=1;j--)
        {
            if(i<=j)
            {
               printf("*\t");
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

