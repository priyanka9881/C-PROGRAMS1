//Accept division of student from user and depends on the division
//display exam timing. There are 4 divisions in school as A,B,C,D. Exam
//of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//(Application should be case insensitive)
//Input : C
//Output : Your exam at 9.20 AM
//Input : d
//Output : Your exam at 10.30 AM

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char c)
{
    if((c=='a') || (c=='A'))
    {
       printf("Your Exam Starts at 7 AM");
    }
    else if((c=='b') || (c=='B'))
    {
       printf("Your Exam Starts at 8.20 AM");
    }
    else if((c=='c') || (c=='C'))
    {
       printf("Your Exam Starts at 9.20 AM");
    }
    else if((c=='d') || (c=='D'))
    {
       printf("Your Exam Starts at 10.30 AM");
    }
    else
    {
        printf("There is no %c division",c);
    }
}

int main()
{
    char ch='\0';
    printf("Enter Your division:\t");
    scanf("%c",&ch);

    DisplaySchedule(ch);
    
    return 0;
}