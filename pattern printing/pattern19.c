//Accept no. from user and print below pattern.
//i/p: irow=4  icol=4
//o/p:   
//A    B   C   D
//a    b   c   d
//A    B   C   D
//a    b   c   d


#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    char ch1='A',ch2='a';
    for(i=1;i<=irow;i++)
    {
        for(j=1,ch1='A',ch2='a';j<=icol;j++,ch1++,ch2++)
        {
            if((i%2)==1)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
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
//enter row and column.:3 3
//A       B       C
//a       b       c
//A       B       C

//enter row and column.:4 4
//A       B       C       D
//a       b       c       d
//A       B       C       D
//a       b       c       d