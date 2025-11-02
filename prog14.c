/*write a program to read marks of student from keyboard and check whether the student is pass(use simple if statement).*/
#include<stdio.h>

int main()
{
    int marks;
    printf("Enter marks of student: ");
    scanf("%d",&marks);

    if(marks >= 35)
    {
        printf("student is pass\n");

    }

    return 0;
}