//Accept n no. from user and return summasion of n elements
// i/p : n=7
// 4 8 3 2 12 7 11
// o/p : 26
#include<stdio.h>
#include<stdlib.h>

int EvenSum(int arr[],int ilength);

int main()
{
    int isize=0,iret=0,icnt=0;
    int *p=NULL;

    printf("enter no. of elements");
    scanf("%d",&isize);

    p=(int *)malloc(isize * sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter elements:");
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&p[icnt]);
    }

    iret=EvenSum(p,isize);

    printf("Addition of nos is %d",iret);

    free(p);

    return 0;
}

int EvenSum(int arr[],int ilength)
{
    int isum=0,icnt=0;

    if((arr==NULL) || (ilength<=0))
    {
        return 0;
    }

    for(icnt=0;icnt<ilength;icnt++)
    {
        if((arr[icnt]%2)==0)
        {
            isum=isum+arr[icnt];
        }
    }

    return isum;
}