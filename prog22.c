/*Write a progarm to display largest number from three number using logical operator.*/
#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);

    if(a >= b && a >= c)
        printf("largest number is: %d\n",a);
    else if(b >= a && b>= c)
        printf("largest number is: %d\n",b);
    else 
    printf("largetst number is: %d\n",c);

    return 0;
}
