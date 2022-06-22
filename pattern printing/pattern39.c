//Accept no. from user and print below pattern.
//i/p: irow=4  icol=4
//o/p:   
//A    B   C   D
//1    2   3   4
//A    B   C   D
//1    2   3   4


#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    char ch='A';
    for(i=1;i<=irow;i++)
    {
        for(j=1,ch='A';j<=icol;j++,ch++)
        {
            if((i%2)==1)
            {
               printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",j);
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

