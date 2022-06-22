//Accept no. from user and print below pattern.
//i/p: irow=4  icol=4
//o/p:   
//A    A   A   A
//B    B   B   B  
//C    C   C   C
//D    D   D   D


#include<stdio.h>
void pattern(int irow,int icol)
{
    int i=0,j=0;
    char ch='A';
    for(i=1,ch='A';i<=irow;i++,ch++)
    {
        for(j=1;j<=icol;j++)
        {
            printf("%c\t",ch);
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
//A    A   A   A
//B    B   B   B  
//C    C   C   C
//D    D   D   D

//enter row and column.:5 3
//A       A       A
//B       B       B
//C       C       C
//D       D       D
//E       E       E