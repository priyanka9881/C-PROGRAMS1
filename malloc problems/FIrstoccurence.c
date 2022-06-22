//Accept n no. from user as well as 1 no.and return 1st occurence of that no.
// i/p : n=6
// Elements : 85 66 3 80 93 88
// element: 3
// o/p : 2
#include<stdio.h>
#include<stdlib.h>

int Occurence(int [],int,int);

int main()

{
    int isize=0,iret=0,icnt=0,iValue=0;
    int *brr=NULL;

    printf("enter no. of elements:\t");
    scanf("%d",&isize);

    brr=(int *)malloc(isize * sizeof(int));
    if(brr==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter elements:");
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&brr[icnt]);
    }
    printf("enter no to search its occurence:\t");
    scanf("%d",&iValue);

    iret=Occurence(brr,isize,iValue);
    if(iret==-1)
    {
        printf("error :mamory failure");
    }
    else if(iret==-2)
    {
        printf("error : size failure");
    }
    else if(iret==-3)
    {
        printf("error : There is no such element");
    }
    else
    {
        printf("Success :Element occurs at %d",iret);
    }
    
    free(brr);

    return 0;
}

int Occurence(int arr[],int ilength,int ivalue)
{
    int icnt=0;

    if(arr==NULL)
    {
        return -1;
    }
    if(ilength<=0)
    {
        return -2;
    }
    for(icnt=0;icnt<ilength;icnt++)
    {
        if(arr[icnt]==ivalue)
        {
            break;
        }
    }
    if(icnt==ilength)
    {
        return -3;
    }
    else
    {
       return icnt;
    }
}