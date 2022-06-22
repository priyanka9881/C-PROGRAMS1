//Accept N numbers from user and return product of all odd elements.
//Input : N : 6
//Elements : 15 66 3 70 10 88
//Output : 45

#include<stdio.h>
#include<stdlib.h>

int Maximum(int [],int);

int main()

{
    int isize=0,icnt=0,iret=0;
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
    
    iret=Maximum(p,isize);
    printf("maximum no is %d",iret);
    

    free(p);
   return 0;
   
}

int Maximum(int arr[],int ilength)
{
    int icnt=0,product=1,ino=0;

    int max=arr[0];

    for(icnt=0;icnt<ilength;icnt++)
    {
        if(arr[icnt]>max)
        {
            max=arr[icnt];
        }
    }
    return max;
}