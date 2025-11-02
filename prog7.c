/*write a program Divide two number*/
#include<stdio.h>

int main(){
    int a, b, div;
    printf("enter first number into a: ");
    scanf("%d",&a);
    printf("enter second number into b: ");
    scanf("%d",&b);
    div = a / b;
    printf("Division of %d and %d is %d\n", a, b, div);
    return 0;
    
}