//Accept no. from user and print below pattern.
//i/p: irow=4  icol=4
//o/p:   
//1       2       3     4
//a       b       c     d
//1       2       3     4
//a       b       c     d


#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0,k=1;
    char ch='a';
    for(i=1;i<=irow;i++)
    {
        for(j=1,ch='a';j<=icol;j++,ch++)
        {
            if((i%2)==1)
            {
               printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",(j));
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
//enter row and column.::5 6
//a       b       c       d       e       f
//1       2       3       4       5       6
//a       b       c       d       e       f
//1       2       3       4       5       6
//a       b       c       d       e       f
//enter row and column.:3 6
//a       b       c       d       e       f
//1       2       3       4       5       6
//a       b       c       d       e       f