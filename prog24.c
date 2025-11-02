/*Write a program to find out smaller number from two numbers alsocheck for equality*/
#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter value in a: ");
    scanf("%d",&a);
    printf("Enter value in b: ");
    scanf("%d",&b);

    if(a < b)
        printf("%d is smaller than %d\n", a, b);
    else if(b < a)
        printf("%d is smaller than %d\n", b, a);
    else 
        printf("both number are equal\n");

        return 0;

}