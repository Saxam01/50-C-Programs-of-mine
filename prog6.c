/*write a program multiply two number*/
#include<stdio.h>

int main()
{
    int a,b,mul;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    mul = a * b;
    printf("multiplication of %d and %d is %d\n", a,b,mul);
    return 0;
    
}