/*write a program to dispaly sum of first 5 even numbers*/
#include<stdio.h>

int main()
{
    int sum = 0, num = 2, count = 1;
    start:
    sum = sum + num;
    num = num + 2;
    count = count + 1;
    if(count <= 5)
    {
        goto start;

    }

    printf("sum of first 5 even number is %d\n", sum);

    return 0;

}