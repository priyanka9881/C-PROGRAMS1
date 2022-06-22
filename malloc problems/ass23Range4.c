//Accept N numbers from user and accept Range, Display all elements from
//that range
//Input : N : 6
//Start: 60
//End : 90
//Elements : 85 66 3 76 93 88
//Output : 66 76 88


#include<stdio.h>
#include<stdlib.h>

void Range(int [],int,int,int);

int main()

{
    int isize=0,icnt=0,iret=0,iStart=0,iEnd=0;
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
    
    printf("Enter start no.");
    scanf("%d",&iStart);

    printf("Enter end no.");
    scanf("%d",&iEnd);

    Range(p,isize,iStart,iEnd);
    

    return 0;
}

void Range(int arr[],int ilength,int ino1,int ino2)
{
    int icnt=0;

    for(icnt=0;icnt<ilength;icnt++)
    {
        if((arr[icnt]>ino1) && (arr[icnt]<ino2))
        {
            printf("%d\t",arr[icnt]);
        }
    }

    if(icnt==ilength)
    {
        printf("there is no such element");
    }
 
}