#include<stdio.h>
#include<stdlib.h>

int Sumasion(int arr[],int ilength);

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

    iret=Sumasion(p,isize);

    printf("Addition of nos is %d",iret);

    free(p);

    return 0;
}

int Sumasion(int arr[],int ilength)
{
    int isum=0,icnt=0;

    if((arr==NULL) || (ilength<=0))
    {
        return 0;
    }

    for(icnt=0;icnt<ilength;icnt++)
    {
        isum=isum+arr[icnt];
    }

    return isum;
}