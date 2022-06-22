//Accept N numbers from user and return frequency of 11 form it.
//Input : N : 6
//Elements : 85 66 3 15 93 88
//Output : 0
//Input : N : 6
//Elements : 85 11 3 15 11 111
//Output : 2

#include<stdio.h>
#include<stdlib.h>


int Frequency(int [],int);

int main()

{
    int isize=0,icnt=0,iret=0,iValue=0;
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
    

    iret=Frequency(p,isize);
    printf("%d",iret);
    

    
    free(p);

    return 0;
}

int Frequency(int arr[],int ilength)
{
    int icnt=0,ino=0;

    if(arr==NULL)
    {
        return -1;
    }
   
    for(icnt=0;icnt<ilength;icnt++)
    {
        if(arr[icnt]==11)
        {
           ino++;
        }
        
    }
   return ino;
    
}