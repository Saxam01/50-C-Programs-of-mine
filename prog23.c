/*write a program to find middle number from three number by using nested if statement*/
#include<stdio.h>

int main()
{
    int a, b, c, middle;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("enter third number: ");
    scanf("%d",&c);

    if(a > b)
    {
        if (a < c)
            middle =a;
        else
        {
            if(b > c)
                middle = b;
            else 
                middle = c;
        }
        
    }
    else
    {
        if(a > c)
            middle = a;
        else
        {
            if(b < c)
                middle = b;
            else
                middle = c;
        
        }
}

   printf("middle number is: %d\n", middle);
   return 0; 
}