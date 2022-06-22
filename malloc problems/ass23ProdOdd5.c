//Accept N numbers from user and return product of all odd elements.
//Input : N : 6
//Elements : 15 66 3 70 10 88
//Output : 45

#include<stdio.h>
#include<stdlib.h>

int Product(int [],int);

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
    
    iret=Product(p,isize);
    if(iret==0)
    {
        printf("there is no odd no.");
    }
    else
    {
        printf("%d",iret);
    }

    free(p);
   return 0;
   
}

int Product(int arr[],int ilength)
{
    int icnt=0,product=1,ino=0;

    for(icnt=0;icnt<ilength;icnt++)
    {
        if(arr[icnt]%2==1)
        {
            product=product*arr[icnt];
            ino++;
        }
    }
    if(ino==0)
    {
        return 0;
    }
    else
    {
        return product;
    }
}