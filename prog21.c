/*Write a progarm to display smallest number from three number using logical operator.*/
#include<stdio.h>

int main()
{
    int a, b, c, small;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    printf("Enter third numer: ");
    scanf("%d",&c);

    if(a <= b && a <= c)
        printf("smallest number is: %d \n",a);
    else if(b <= a && b <= c)
        printf("smallest number is: %d \n",b);
    else 
        printf("smallest number is: %d \n",c);

        return 0;
}