//Accept n no. from user and display all such elements which are divisible by 5.
// i/p : n=6
// Elements : 85 66 3 80 93 88
// o/p : 85 80
#include<stdio.h>
#include<stdlib.h>

//int Difference(int arr[],int ilength);

int main()
{
    int isize=0,iret=0,icnt=0;
    int *p=NULL;

    printf("enter no. of elements");
    scanf("%d",&isize);

    p=(int *)malloc(isize * sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter elements:");
    for(icnt=0;icnt<isize;icnt++)
    {
        scanf("%d",&p[icnt]);
    }

    Display(p,isize);


    free(p);

    return 0;
}

int Display(int arr[],int ilength)
{
    int idiff=0,icnt=0,ieven=0,iodd=0;

    if((arr==NULL) || (ilength<=0))
    {
        return 0;
    }

    for(icnt=0;icnt<ilength;icnt++)
    {
        if((arr[icnt]%5)==0)
        {
            printf("%d\t",arr[icnt]);
        }
        
    }

}