// 2. Accept N numbers from user and return difference between frequency of
//even number and odd numbers.
//Input : N : 7
//Elements : 85 66 3 80 93 88 90
//Output : 1 (4 -3)

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
        else
        {
            ino--;
        }
    }
   return ino;
    
}