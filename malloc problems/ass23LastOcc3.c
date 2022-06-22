//Accept N numbers from user and accept one another number as NO ,
//return index of last occurrence of that NO.

//Input : N : 6
//NO: 66
//Elements : 85 66 3 66 93 88
//Output : 3
//Input : N : 6
//NO: 93
//Elements : 85 66 3 66 93 88
//Output : 4
//Input : N : 6
//NO: 12
//Elements : 85 11 3 15 11 111
//Output : -1

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int [],int,int);

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

    iret=LastOcc(p,isize,iValue);
    if(iret==-2)
    {
        printf("there is no such element");
    }
    else
    {
        printf("%d",iret);
    }
    free(p);

    return 0;
}

int LastOcc(int arr[],int ilength,int ino)
{
    int icnt=0,ino2=0;

    if(arr==NULL)
    {
        return -1;
    }
   
    for(icnt=ilength-1;icnt>=0;icnt--)
    {
        if(arr[icnt]==ino)
        {
           break;
        }
        
    }
    if(icnt<0)
    {
        return -2;
    }
    else
    {
        return icnt;
    }
    
}