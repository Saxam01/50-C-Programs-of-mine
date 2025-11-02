/*write a program to calculate simple interest*/
#include<stdio.h>

int main()
{
    float principal , rate, time, interest;
    printf("Enter value in principal :");
    scanf("%f",&principal);
    printf("Enter value in rate: ");
    scanf("%f",&rate);
    printf("Enter number of time period: ");
    scanf("%f",&time);
    interest = (principal * rate * time) / 100;
    printf("Simple interest is: %.2f\n", interest);
    return 0;


}