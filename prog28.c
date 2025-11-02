/*Write a program to print first 10 natural numbers!! (using goto statement)*/
#include<stdio.h>

int main()
{
    int num = 1;

    start:
        printf("%d",num);
        num++;
        if(num <= 10)
            goto start;

    return 0;
}