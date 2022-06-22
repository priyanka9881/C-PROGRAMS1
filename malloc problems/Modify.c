//Accept N numbers from user and update that n no in such a way, if no. is even then increament its value by 4,if no. is odd then decreament it by 3.
//Input : N : 6
//Elements : 12 15 8 5 20 9
//Output : 16 12 12 2 24 6

#include<stdio.h>
#include<stdlib.h>

void Modify(int [],int);

int main()

{
    int isize=0,icnt=0;
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
    
    Modify(p,isize);
    printf("update array is:\t");
    for(icnt=0;icnt<isize;icnt++);
    {
        printf("%d\t",p[icnt]);
    }

    free(p);
   return 0;
   
}

void Modify(int arr[],int ilength)
{
    int icnt=0;

    
    for(icnt=0;icnt<ilength;icnt++)
    {
        if(arr[icnt]%2==0)
        {
            arr[icnt]=arr[icnt]+4;
        }
        else
        {
            arr[icnt]=arr[icnt]+3;
        }
    }
    
}