/*Write a program to subtract 2 number*/
#include<stdio.h>

int main()
{
    int a, b, diff;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    diff = a - b;
    printf("Difference of %d and %d is %d\n", a, b, diff);
    return 0;

}