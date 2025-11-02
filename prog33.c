/*write a program to display  sum of first 5 odd number*/
#include<stdio.h>

int main()
{
    int sum = 0, num = 1, count = 1;
    start:
    sum = sum + num;
    num = num + 2;
    count = count + 1;
    if(count <= 5)
    {
        goto start;
    
    }

    printf("Sum of first 5 odd number is %d\n", sum);
    return 0;
    
}
