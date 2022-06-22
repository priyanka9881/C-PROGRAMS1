//Accept n no. from user as well as 1 no.and return frequency of even no.
// i/p : n=6
// Elements : 85 66 3 80 93 88
// o/p : 3
#include<stdio.h>
#include<stdlib.h>

int CountEven(int [],int);

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

    printf("enter %d elements:",isize);
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&p[icnt]);
    }
    

    iret=CountEven(p,isize);
    printf("%d",iret);
    
    free(p);

    return 0;
}

int CountEven(int arr[],int ilength)
{
    int icnt=0,ino=0;

    if(arr==NULL)
    {
        return -1;
    }
   
    for(icnt=0;icnt<ilength;icnt++)
    {
        if((arr[icnt]%2)==0)
        {
            ino++;
        }
    }
   return ino;
    
}