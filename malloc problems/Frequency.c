//Accept n no. from user as well as accept 1 elements as no. and return the frequency of that variable no. from n nos.
// i/p : n=6
// Elements : 10 11 15 11 4 9
// no : 11
// o/p : 2
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int isize=0,iret=0,icnt=0,iValue=0;
    int *p=NULL;

    printf("enter no. of elements:\t");
    scanf("%d",&isize);

    p=(int *)malloc(isize * sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter elements:\t");
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&p[icnt]);
    }

    printf("enter the element to search:\t");
    scanf("%d",&iValue);

    iret= Frequency(p,isize,iValue);
    printf("%d",iret);
6
    free(p);

    return 0;
}

int Frequency(int arr[],int ilength,int ino)
{
    int iFrequency=0,icnt=0;

    if((arr==NULL) || (ilength<=0))
    {
        return 0;
    }

    for(icnt=0;icnt<ilength;icnt++)
    {
        if(arr[icnt]==ino )
        {
            iFrequency++;
        }
        
    }
    return iFrequency;

}