//Accept no. from user and print below pattern.
//i/p: irow=5  icol=5
//o/p:   

//1       2       3       4       5
//2       3       4       5       6
//3       4       5       6       7
//4       5       6       7       8
//5       6       7       8       9


#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0,k=1;
    for(i=1;i<=irow;i++)
    {
       for(j=1,k=i;j<=icol;j++,k++)
        {
            k<(irow+icol);
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

//enter row and column.:5 5
//1       2       3       4       5
//2       3       4       5       6
//3       4       5       6       7
//4       5       6       7       8
//5       6       7       8       9
//enter row and column.:5 4
//1       2       3       4
//2       3       4       5
//3       4       5       6
//4       5       6       7
//5       6       7       8