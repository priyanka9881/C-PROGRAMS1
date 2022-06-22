//Accept N numbers from user and accept one another number as NO ,
//check whether NO is present or not.

//Input : N : 6
//NO: 66
//Elements : 85 66 3 66 93 88
//Output : TRUE
//Input : N : 6
//NO: 12
//Elements : 85 11 3 15 11 111
//Output : FALSE


#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int [],int,int);

int main()

{
    int isize=0,icnt=0,iValue=0;
    int *p=NULL;
    BOOL bret=TRUE;
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

    bret=Check(p,isize,iValue);
    if(bret==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(p);

    return 0;
}

BOOL Check(int arr[],int ilength,int ino)
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
           break;
        }
        
    }
    if(icnt==ilength)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
}