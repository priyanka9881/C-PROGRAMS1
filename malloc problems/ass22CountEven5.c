//Accept N numbers from user and accept one another number as NO ,
//return frequency of NO form it.
//Input : N : 6
//NO: 66
//Elements : 85 66 3 66 93 88
//Output : 2
//Input : N : 6
//NO: 12
//Elements : 85 11 3 15 11 111
//Output : 0

#include<stdio.h>
#include<stdlib.h>


int Frequency(int [],int,int);

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
    
    printf("Enter no.");
    scanf("%d",&iValue);

    iret=Frequency(p,isize,iValue);
    if(iret==-2)
    {
        printf("There is no such element");
    }
    else
    {
        printf("%d",iret);
    }

    free(p);

    return 0;
}

int Frequency(int arr[],int ilength,int ino)
{
    int icnt=0,ino2=0;

    if(arr==NULL)
    {
        return -1;
    }
   
    for(icnt=0;icnt<ilength;icnt++)
    {
        if(arr[icnt]==ino)
        {
           ino2++;
        }
        
    }
    if(icnt==ilength)
    {
        return -2;
    }
    else
    {
        return ino2;
    }
    
}