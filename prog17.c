/*write a program to read marks from keyboard and progarm should dispaly equivalent grade according to following (use else...if ladder)*/
#include<stdio.h>

int main()
{
    int marks;
    printf("Enter value in marks: ");
    scanf("%d",&marks);

    if(marks >= 90)
        printf("Grade: A\n");
    else if(marks >= 80)
        printf("Grade: B\n");
    else if(marks >= 70)
        printf("Garde: C\n");
    else if(marks >= 60)
        printf("Grade: D\n");
    else if(marks >= 50)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");

        return 0;



}