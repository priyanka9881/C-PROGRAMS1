//Accept no. from user and print below pattern.
//i/p: irow=3  icol=4
//o/p: *    #   *   #
//     *    #   *   #
//     *    #   *   #
//     *    #   *   #

#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=(icol/2);j++)
        {
            printf("*   #\t");
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
//enter row and column.:4 5
//*  #    *  #
//*  #    *  #
//*  #    *  #
//*  #    *  #

//enter row and column.:3 7
//*  #    *  #    *  #
//*  #    *  #    *  #
//*  #    *  #    *  #