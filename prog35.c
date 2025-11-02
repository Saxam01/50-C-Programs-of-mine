/*write a program to find factorial of a given number.*/
#include<stdio.h>

int main()
{
    int number, factorial = 1;
    printf("Enter a number: ");
    scanf("%d",&number);

        if(number < 0)
        {
            printf("Factorial of nagative number dosent exist. \n");
            return 1;

        }
            start:
            if(number == 0)
            {
                printf("Factorial of 0 is 1. \n");
                goto end;
            }


            factorial = factorial * number;
            number--;
            goto start;


            end:
            printf("Factorial is %d \n",factorial);

            return 0;

        

}