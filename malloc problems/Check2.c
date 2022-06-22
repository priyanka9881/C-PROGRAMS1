//Accept N numbers from user check whether that numbers contains 11 in
//it or not.
//Input : N : 6
//Elements : 85 66 11 80 93 88
//Output : 11 is present
//Input : N : 6
//Elements : 85 66 3 80 93 88
//Output : 11 is absent

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int [],int);

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
    

    bret=Check(p,isize);
    if (bret==FALSE)
    {
        printf("11 is not present");
    }
    else
    {
         printf("11 is present");
    }

    
    free(p);

    return 0;
}

BOOL Check(int arr[],int ilength)
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